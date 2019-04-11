#include<stdio.h>
#include <stdlib.h>

typedef struct sh
{
    int x;
    struct sh *next;
} Node;

struct sh *screat()
{
    printf("*******************in screat********************\n");
    printf("请输入:\n");
    struct sh *p1, *p2, *head=NULL;
    head=p1=p2=(Node *)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("创建动态存储空间失败!\n");
        return (head);
    }
    do
    {
        p1=(Node *)malloc(sizeof(Node));
        scanf("%d",&p1->x);
        if(p1->x==0)
        {
            p2->next=NULL;
            free(p1);
            break;
        }
        p2->next=p1;
        p2=p1;
    }
    while(1);
    printf("\n*******************out screat******************\n");
    return (head);
}

void Addnode(Node *pt)
{
    Node *pk, *pr;
    printf("\n*******************in Addnode******************\n");
    printf("请输入要新增结点:\n");
    pk=(Node *)malloc(sizeof(Node));
    pk->next=NULL;
    scanf("%d",&pk->x);
    if(!pt)
    {
        printf("空表!\n");
        return ;
    }
    do
    {
        pr=pt;
        pt=pt->next;
    }
    while(pt && pt->x<pk->x);  //查找 结果两个(1.找到,2.没找到)
    pr->next=pk;                       //前一个结构体地址域存新增结构体地址
    if(pt)
    {
        pk->next=pt;   //找到时,新增结构体地址域存当前结构体地址
    }
    printf("\n*******************out Addnode******************\n");
}

void Deletenode(Node *pt)
{
    printf("\n*******************in Deletenode******************\n");
    Node *pr;
    int Dx;
    printf("请输入请输入要删除增结点:\n");
    scanf("%d",&Dx);
    if(!pt)
    {
        printf("空表!\n");
        return ;
    }
    do
    {
        pr=pt;
        pt=pt->next;
    }
    while(pt && pt->x!=Dx);
    if(!pt)
    {
        printf("找不到该结点!");
        return ;
    }
    pr->next=pt->next;
    free(pt);
    printf("\n*******************out Deletenode******************\n");
}

void Changenode(Node *pt)
{
    printf("\n*******************in Changenode******************\n");
    int i, j=0, Cx;
    printf("请输入要改变第几个结点:\n");
    scanf("%d",&i);
    printf("\n请输入要该结点改变为:\n");
    scanf("%d",&Cx);
    if(!pt)
    {
        printf("空表!");
        return ;
    }
    do
    {
        pt=pt->next;
        ++j;
    }
    while(pt && j<i);
    if(!pt  || j>i)
    {
        printf("找不到该结点!");
        return ;
    }
    pt->x=Cx;
    printf("\n*******************out Changenode******************\n");
}

Node *Deletelist(Node *pt)
{
    Node *pr;
    if(!pt)
    {
        printf("空表!");
        return (NULL);
    }
    do
    {
        pr=pt;
        pt=pt->next;
        free(pr);
    }
    while(pt);
    free(pt);
    return (NULL);
}

void output(Node *pt)
{
    printf("\n*******************in  output******************\n");
    if(!pt)
    {
        printf("空表\n");
        return ;
    }
    while(pt->next!=NULL)
    {
        pt=pt->next;
        printf("%-3d", pt->x);
    }
    printf("\n*******************out output*****************\n");
}

int main()
{
    Node *pa;
    pa=screat();
    Addnode(pa);
    Deletenode(pa);
    Changenode(pa);
    pa=Deletelist(pa);
    output(pa);
    free(pa);
    return 0;
}
