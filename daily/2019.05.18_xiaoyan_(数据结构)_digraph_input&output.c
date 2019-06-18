#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100  //最大顶点数
#define ERROR 0
#define OK 1
typedef int status;
typedef struct Node  //边结点
{
    int space;  //该边所指向的顶点的位置
    struct Node *nextbiao;  //指向下一条边的指针
    int data;  //和边相关的信息
}Node;
typedef struct VNode  //顶点信息
{
    char message;
    Node *firstbiao;  //指向第一条依附该顶点的边的指针
}VNode,Adjlist[Max];  //Adjlist表示邻接表类型
typedef struct        //邻接表
{
    Adjlist vertices;
    int vexnum,arcnum; //图的当前顶点数和边数
}ALgraph;
int LocateVex(ALgraph *G,char v)   //查找节点V1在图G的存储节点数组中的索引位置
{
	int i;
	for(i=0;i<G->vexnum;i++)
	{
		if(G->vertices[i].message==v) //如果数组中有这个节点，返回该节点在数组中的索引
			return i;
	}
	if(i>=G->vexnum)
		return ERROR;
	else
		return OK;
}

status create(ALgraph *G)
{   int i,j,k;
    char v1,v2;
    Node *s,*t;
    scanf("%d,%d",&G->vexnum,&G->arcnum);  //输入总顶点数，总边数
    for(i=0;i<G->vexnum;++i)  //输入各点，构造表头结点表
    {
        scanf(" %c",&G->vertices[i].message);  //输入顶点值
        G->vertices[i].firstbiao=NULL;  //初始化表头结点的指针域为NULL
    }                                   //for
    for(k=0;k<G->arcnum;++k)       //输入各边，构造邻接表
    {
        scanf(" %c,%c",&v1,&v2);   //输入一条边依附的两个顶点
        i=LocateVex(G,v1);
        j=LocateVex(G,v2);    //确定v1,v2在G中位置，即顶点在G.vertices中的序号
        s=(Node*)malloc(sizeof(Node)); //生成一个新的边结点*s
        t=(Node*)malloc(sizeof(Node)); //生成另一个对称的新的边结点*t
        s->space=j; //邻接点序号为j
        s->nextbiao=G->vertices[i].firstbiao;  //将新结点*s插入顶点v1的边表头部
        G->vertices[i].firstbiao=s;
        t->space=i; //邻接点序号为i
        t->nextbiao=G->vertices[j].firstbiao;
        G->vertices[j].firstbiao=t;  ////将新结点*t插入顶点v1的边表头部
    }
    return OK;
}
bool visited[100];
void DFS_AL(ALgraph *G,int v)
{
	int w;
    printf("%-3c",G->vertices[v].message);
    visited[v]=true;
    Node *p=G->vertices[v].firstbiao;
    while(p!=NULL)
    {
        w=p->space;
        if(!visited[w])
        DFS_AL(G,w);
        p=p->nextbiao;
    }
}
int main()
{
    ALgraph G;
    int i;
  //  freopen( "E:\\邻接表\\in.txt", "r", stdin );
    scanf("%d",&i);
    while(i<3)
    {
        switch(i)
        {
        case 1:create(&G);break;
        case 2:DFS_AL(&G,0);break;
        default:printf("ERROR") ;break;
        }
        scanf("%d",&i);
    }
    return 0;
}
/*
1
4,3
a b c d
a,b
b,c
c,d
2
*/
