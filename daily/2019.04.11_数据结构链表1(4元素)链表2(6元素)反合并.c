#include<stdio.h>
#include <stdlib.h>

typedef struct sh
{
    int x;
    struct sh *next;
} Node;

struct sh *screat(int n)
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
    while(n--)
    {
        p1=(Node *)malloc(sizeof(Node));
        scanf("%d",&p1->x);
        p2->next=p1;
        p2=p1;
    }
    p1->next=NULL;
    printf("\n*******************out screat******************\n");
    return (head);
}

void combinelist(Node *p1, Node *p2)  //前插法
{
    printf("\n*******************in combinelist******************\n");
    Node *head=p1, *pt, *tail; //pt用于暂存地址,
    if(!p1)
    {
        printf("空表pa\n");
        return ;
    }
    if(!p2)
    {
        printf("空表pb\n");
        return ;
    }
    p1=p1->next;
    p2=p2->next;
    tail=(p1->x<p2->x)?p1:p2;//取最小的数为 尾
    do
    {
        if(p1->x<p2->x)
        {
            pt=p1;
            p1=p1->next;
        }
        else
        {
            pt=p2;
            p2=p2->next;
        }
        pt->next=head->next;
        head->next=pt;
    }
    while(p1 && p2);             //前插法1(注意循环之后,仅仅是其中一个表空了；)
    p2=p1?p1:p2;                  //将非空表的地址赋给p2;即:p2指向未合并完的结点
    tail->next=NULL;//尾节点地址域置空；
    do
    {
        pt=p2;
        p2=p2->next;
        pt->next=head->next;
        head->next=pt;
    }
    while(p2);                    //前插法2(将剩下的前插)
    printf("\n*******************out combinelist******************\n");
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
    Node *pa, *pb;
    pa=screat(4);
    pb=screat(6);
    combinelist(pa,pb);
    output(pa);
    output(pb);  //pb可输出;
    free(pa);
    free(pb);
    return 0;
}
