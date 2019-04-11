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
    printf("������:\n");
    struct sh *p1, *p2, *head=NULL;
    head=p1=p2=(Node *)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("������̬�洢�ռ�ʧ��!\n");
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

void combinelist(Node *p1, Node *p2)  //ǰ�巨
{
    printf("\n*******************in combinelist******************\n");
    Node *head=p1, *pt, *tail; //pt�����ݴ��ַ,
    if(!p1)
    {
        printf("�ձ�pa\n");
        return ;
    }
    if(!p2)
    {
        printf("�ձ�pb\n");
        return ;
    }
    p1=p1->next;
    p2=p2->next;
    tail=(p1->x<p2->x)?p1:p2;//ȡ��С����Ϊ β
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
    while(p1 && p2);             //ǰ�巨1(ע��ѭ��֮��,����������һ������ˣ�)
    p2=p1?p1:p2;                  //���ǿձ�ĵ�ַ����p2;��:p2ָ��δ�ϲ���Ľ��
    tail->next=NULL;//β�ڵ��ַ���ÿգ�
    do
    {
        pt=p2;
        p2=p2->next;
        pt->next=head->next;
        head->next=pt;
    }
    while(p2);                    //ǰ�巨2(��ʣ�µ�ǰ��)
    printf("\n*******************out combinelist******************\n");
}

void output(Node *pt)
{
    printf("\n*******************in  output******************\n");
    if(!pt)
    {
        printf("�ձ�\n");
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
    output(pb);  //pb�����;
    free(pa);
    free(pb);
    return 0;
}
