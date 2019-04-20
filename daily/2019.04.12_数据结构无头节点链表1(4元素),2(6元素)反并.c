#include <stdio.h>
#include <stdlib.h>

typedef struct sh
{
    int x;
    struct sh *next;
} Node;

Node *screat(int n)
{
    Node *p1, *p2,*head=NULL;
    int i;
    printf("enter:\n");
    for(i=0; i<n; i++)
    {
        if(!i)
        {
            head=p1=p2=(Node *)malloc(sizeof(Node));
            if(!head)
            {
                printf("screat feilure!");
                return (head);
            }
        }
        else
        {
            p1=(Node *)malloc(sizeof(Node));
        }
        scanf("%d",&p1->x);
            p2->next=p1;
            p2=p1;
    }
    p1->next=NULL;
    return (head);
}

Node *Merge(Node *p1, Node *p2)
{
    Node *head, *tail, *pt; //due to 新head在结构体中声明，so要返回head
    if(!p1)
    {
        printf("空表p1!");
        return ;
    }
    if(!p2)
    {
        printf("空表p2!");
        return ;
    }
    head=tail=(p1->x<p2->x)?p1:p2;    //取尾节点,未断明;
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
        pt->next=head;
        head=pt;
    }
    while(p1 && p2);
    p2=p1?p1:p2;
    tail->next=NULL;
    do
    {
        pt=p2;
        p2=p2->next;
        pt->next=head;
        head=pt;
    }
    while(p2);
    return (head);
}

void output(Node *p1)
{
    if(p1==NULL)
    {
        printf("空表!");
        return ;
    }
    while(p1!=NULL)
    {

        printf("%-5d",p1->x);
        p1=p1->next;
    }
}

int main()
{
    Node *pa, *pb;
    pa=screat(4);
    pb=screat(6);
    pa=Merge(pa,pb);
    output(pa);
    free(pa);
    free(pb);
    return 0;
}
