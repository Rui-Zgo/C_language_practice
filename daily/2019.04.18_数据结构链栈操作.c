#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define SIZE sizeof(StackNode)


typedef int       Status;        //������������;
typedef int       SElemType;  //ʹ��ʱ,���Զ���Ԫ����
typedef struct  Stack      //��ջ;
{
    SElemType Data;
    struct  Stack *next ;
} StackNode, *LinkStack;  //

Status InitStack(LinkStack *S)  //����,��ָ���ÿ�,
{/*
    *�������ö���ָ��,
    *��Ϊmain�����ж���ջָ��Stack(��LinkStack  Stack)ָ������Ķ�̬�洢�ռ������ַ;
    *ʵ��Stack�����β�*S����main�����ж����ջָ��Stack�������ַ;
    *��˶��β�S(��ջָ��Stack�������ַ)�����������Ҵ���;
    *������ʶ�̬�洢�ռ�,��Ҫ���β�Sʹ�ö���ָ��(��(*S)->? or *(*S).?);
    * //"->" and "."���ȼ�����"*";����ʹ��*(S)->?;(��Ϊ�������޸�ָ��ָ��)
    *���·�main����ͬ��;
    */
    *S=NULL;
    return OK;

}


Status Push(LinkStack *S, SElemType e)  //ѹ��
{
    StackNode *p=(StackNode *)malloc(SIZE);
    if(!p)  exit(-1);
    p->Data=e;
    p->next=*S;
    *S=p;
    return OK;

}


Status Pop(LinkStack *S, SElemType *e)  //����
{
    LinkStack p;
    if(*S==NULL)
        return ERROR;      //ջ��
   *e=(*S)->Data;
    p=*S;
    *S=(*S)->next;
    free(p);     //��ɾ������Ķ�̬�洢�ռ�
    return OK;
}

Status GetTop(LinkStack *S, SElemType *e)  //ȡջ��
 {
    if(*S!=NULL)
    {
      *e=(*S)->Data;
        return OK;
    }
    return ERROR;
}

Status Delete(LinkStack *S) //ɾ��ջ
{
    LinkStack p;
    while(!*S)
    {
        p=*S;
        *S=(*S)->next;
        free(p);
    }
    return OK;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int                Size,       i;
    LinkStack       Stack;       //ע��,����ָ��,�������Ķ�̬�洢�ռ�;
    SElemType     Data;

    InitStack(&Stack);

    printf("enter munber of node:\n");
    scanf("%d", &Size);

    printf("please enter:\n");
    for(i=0; i<Size; i++)                         //ѹ��
    {
        scanf("%d", &Data);
        if(ERROR==Push(&Stack, Data))
        {
            printf("Stack full,enter in vain;\n\n");
            break;
        }
    }

    printf("\n\nStack top:\n");
    GetTop(&Stack, &Data);                        //ȡջ��
    printf("%d\n",Data);

    printf("Stack Pop:\n");
       while(i--)                                                  //����
    {
        Pop(&Stack, &Data);
        printf("%d\t",Data);
    }

    printf("\nDelete Stack!");
    Delete(&Stack);                                //ɾ��ջ
    return 0;
}
