#include<stdio.h>
#include <stdlib.h>

struct sh
{
    int x;
    struct sh *next;
};

struct sh *screat(int n)
{
    struct sh *p1, *p2, *head;
    head=p1=p2=malloc(sizeof(struct sh));
    while(n--)
    {
        p1=malloc(sizeof(struct sh));
        do
        {
            scanf("%d",&p1->x);
        }
        while( p1->x<=0 || p1->x>=20);
        p2->next=p1;
        p2=p1;
    }
    p1->next=NULL;
    return (head);
}

void output(struct sh *pt)
{
    while(pt->next!=NULL)
    {
        pt=pt->next;
        printf("%-3d", pt->x);
    }
}

int main()
{
    struct sh *pa, *pb;
    printf("please enter 4 numbers:\n");
    pa=screat(4);
    printf("\n************************\n");
    printf("please enter 6 numbers:\n");
    pb=screat(6);
    printf("\n************************\n");
    printf("/1\n");
    output(pa);
    printf("\n-------------------------\n");
    printf("/2\n");
    output(pb);
    printf("\n-------------------------\n");
    free(pa);
    free(pb);
    return 0;
}
