#include <stdio.h>
#include <stdlib.h>

typedef struct HafumanNode
{
    int wigth;
    int  lchild, rchild, parent;
} HafuNode, *HafuTree;

void output( HafuTree *H, int n );

void search(  HafuTree *H, int m1, int a[] )   //搜数
{
    for( int k=0; k<2; k++ )
    {
        int min=1000000, flag=0;
        for( int i=1; i<m1; i++ )
        {
            if( min>(*H)[i].wigth && (*H)[i].parent==-1)
			{
				min=(*H)[i].wigth;
                flag=i;
            }
        }
        a[k]=flag;
        (*H)[flag].parent=-2;              //搜出最小值，并改变父节点为-2;
    }
}

void InitHafuman( HafuTree *H, int n )
{
    int m=2*n-1;
    int Hmin[2], i;
    HafuTree ht=( HafuTree )malloc( sizeof(HafuNode)*(m+1) );  //新用结构体指针操作,用二重指针表示比较麻烦；
    if( ht==NULL )
        exit(-1);
    for( i=1; i<=m; i++ )  //初始化,  不用0, 是因为用一个取不到的值好分辨;
    {
        ht[i].lchild=-1;
        ht[i].rchild=-1;
        ht[i].parent=-1;
    }

    for( i=1; i<=n; i++ )   //赋权
    {
        scanf("%d", &ht[i].wigth);
    }

    for( ; i<=m; i++ )      //构HaffumanTree
    {
        search( &ht, i, Hmin );   //搜数(无父节点且全最小的二个结点)  ***
        ht[Hmin[0]].parent=i;
        ht[Hmin[1]].parent=i;
        ht[i].rchild=Hmin[0];
        ht[i].lchild=Hmin[1];
        ht[i].wigth=ht[Hmin[0]].wigth+ht[Hmin[1]].wigth;
    }
    *H=ht;       //新用结构体指针的指针变量赋值给原指针；
    //output( &ht, n );
}

void output( HafuTree *H, int n )
{
    printf("_________________________________________");
    printf("\n结点  权  父节点  左孩子  右孩子\n");
    for( int i=1; i<=2*n-1; i++ )
    {
        printf("%2d %4d%7d%8d%8d\n", i, (*H)[i].wigth, (*H)[i].parent, (*H)[i].lchild, (*H)[i].rchild);
    }
    // 二重指针若是指向(结构体)数组,须解引用得到(结构体)数组；
}

int main()
{
    int n;
    HafuTree HF;
    scanf("%d", &n);
    InitHafuman( &HF, n );
    output( &HF, n );
    return 0;
}
