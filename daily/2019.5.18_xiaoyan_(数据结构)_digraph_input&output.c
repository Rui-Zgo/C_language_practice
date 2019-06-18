#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100  //��󶥵���
#define ERROR 0
#define OK 1
typedef int status;
typedef struct Node  //�߽��
{
    int space;  //�ñ���ָ��Ķ����λ��
    struct Node *nextbiao;  //ָ����һ���ߵ�ָ��
    int data;  //�ͱ���ص���Ϣ
}Node;
typedef struct VNode  //������Ϣ
{
    char message;
    Node *firstbiao;  //ָ���һ�������ö���ıߵ�ָ��
}VNode,Adjlist[Max];  //Adjlist��ʾ�ڽӱ�����
typedef struct        //�ڽӱ�
{
    Adjlist vertices;
    int vexnum,arcnum; //ͼ�ĵ�ǰ�������ͱ���
}ALgraph;
int LocateVex(ALgraph *G,char v)   //���ҽڵ�V1��ͼG�Ĵ洢�ڵ������е�����λ��
{
	int i;
	for(i=0;i<G->vexnum;i++)
	{
		if(G->vertices[i].message==v) //���������������ڵ㣬���ظýڵ��������е�����
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
    scanf("%d,%d",&G->vexnum,&G->arcnum);  //�����ܶ��������ܱ���
    for(i=0;i<G->vexnum;++i)  //������㣬�����ͷ����
    {
        scanf(" %c",&G->vertices[i].message);  //���붥��ֵ
        G->vertices[i].firstbiao=NULL;  //��ʼ����ͷ����ָ����ΪNULL
    }                                   //for
    for(k=0;k<G->arcnum;++k)       //������ߣ������ڽӱ�
    {
        scanf(" %c,%c",&v1,&v2);   //����һ������������������
        i=LocateVex(G,v1);
        j=LocateVex(G,v2);    //ȷ��v1,v2��G��λ�ã���������G.vertices�е����
        s=(Node*)malloc(sizeof(Node)); //����һ���µı߽��*s
        t=(Node*)malloc(sizeof(Node)); //������һ���ԳƵ��µı߽��*t
        s->space=j; //�ڽӵ����Ϊj
        s->nextbiao=G->vertices[i].firstbiao;  //���½��*s���붥��v1�ı߱�ͷ��
        G->vertices[i].firstbiao=s;
        t->space=i; //�ڽӵ����Ϊi
        t->nextbiao=G->vertices[j].firstbiao;
        G->vertices[j].firstbiao=t;  ////���½��*t���붥��v1�ı߱�ͷ��
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
  //  freopen( "E:\\�ڽӱ�\\in.txt", "r", stdin );
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
