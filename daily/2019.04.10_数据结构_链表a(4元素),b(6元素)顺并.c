#include<stdio.h>
#include <stdlib.h>

struct sh
{
    int x;
    struct sh *next;
};

struct sh *screat(int n)
{
    printf("*******************in screat********************\n");
    printf("please enter %d numbers:\n",n);
    struct sh *p1, *p2, *head=NULL;
    head=p1=p2=(struct sh *)malloc(sizeof(struct sh));
    if(head==NULL)  {printf("screat failure!\n"); return (head);}
    while(n--)
    {
        p1=(struct sh *)malloc(sizeof(struct sh));
        do
        {
            scanf("%d",&p1->x);
        }
        while( p1->x<0 || p1->x>20);
        p2->next=p1;
        p2=p1;
    }
    p1->next=NULL;
     printf("*******************out screat******************\n");
    return (head);
}

void *merger(struct sh *p1, struct sh *p2)
{
    struct sh  *p3=p1;
    if(!p1 || !p2)  {printf("¿Õ±í\n");return 0; }
    p1=p1->next;
    p2=p2->next;
    while(p1 && p2)
    {
        if(p1->x<=p2->x)
        {
           p3->next=p1;
           p3=p1;
           p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p3=p2;
            p2=p2->next;
        }
    }
    p3->next=p1?p1:p2;
    free(p2);
}

void output(struct sh *pt)
{
    printf("\n*******************in  output******************\n");
    if(!pt) {printf("¿Õ±í\n"); return ;}
    while(pt->next!=NULL)
    {
        pt=pt->next;
        printf("%-3d", pt->x);
    }
    printf("*******************out output*****************\n");
}

int main()
{
    struct sh *pa, *pb;
    pa=screat(4);
    pb=screat(6);
    merger(pa, pb);
    output(pa);
    free(pa);
    free(pb);
    return 0;
}
