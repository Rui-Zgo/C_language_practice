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
    printf("������:\n");
    struct sh *p1, *p2, *head=NULL;
    head=p1=p2=(Node *)malloc(sizeof(Node));
    if(head==NULL)
    {
        printf("������̬�洢�ռ�ʧ��!\n");
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
    printf("������Ҫ�������:\n");
    pk=(Node *)malloc(sizeof(Node));
    pk->next=NULL;
    scanf("%d",&pk->x);
    if(!pt)
    {
        printf("�ձ�!\n");
        return ;
    }
    do
    {
        pr=pt;
        pt=pt->next;
    }
    while(pt && pt->x<pk->x);  //���� �������(1.�ҵ�,2.û�ҵ�)
    pr->next=pk;                       //ǰһ���ṹ���ַ��������ṹ���ַ
    if(pt)
    {
        pk->next=pt;   //�ҵ�ʱ,�����ṹ���ַ��浱ǰ�ṹ���ַ
    }
    printf("\n*******************out Addnode******************\n");
}

void Deletenode(Node *pt)
{
    printf("\n*******************in Deletenode******************\n");
    Node *pr;
    int Dx;
    printf("������������Ҫɾ�������:\n");
    scanf("%d",&Dx);
    if(!pt)
    {
        printf("�ձ�!\n");
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
        printf("�Ҳ����ý��!");
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
    printf("������Ҫ�ı�ڼ������:\n");
    scanf("%d",&i);
    printf("\n������Ҫ�ý��ı�Ϊ:\n");
    scanf("%d",&Cx);
    if(!pt)
    {
        printf("�ձ�!");
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
        printf("�Ҳ����ý��!");
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
        printf("�ձ�!");
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
