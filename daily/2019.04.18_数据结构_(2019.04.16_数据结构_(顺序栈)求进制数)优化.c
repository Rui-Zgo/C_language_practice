#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define SIZEMOX 100

typedef int       Status;        //������������;
typedef int       SElemType;    //ʹ��ʱ,���Զ���Ԫ����;
typedef struct  Stack      //ջ;
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} Sqstack;

Status InitStack(Sqstack *S)  //����
{
    S->base=(SElemType *)malloc(SIZEMOX*sizeof(SElemType));
    if(!S->base)
        exit(-1);
    S->top=S->base;
    S->stacksize=SIZEMOX;
    return OK;

}

Status Push(Sqstack *S, SElemType e)  //ѹ��
{
    if(S->top-S->base==S->stacksize)              //ջ��
        return ERROR;                                     //����realloc����ȱ��̫��,����������;
    *S->top++=e;
    return OK;
}


Status Pop(Sqstack *S, SElemType *e)  //����
{
    if(S->top==S->base)
        return ERROR;        //ջ��
    S->top--;
    *e=*S->top;
    return OK;
}

Status Empty(Sqstack *S) //���ջ
{
    S->top=S->base;
    return OK;
}

Status Delete(Sqstack *S) //ɾ��ջ
{
    free(S->base);
    S->top=S->base=NULL;
    S->stacksize=0;
    return OK;
}

int main()
{
    Sqstack         Stack;
    SElemType     a, b, c;

    InitStack(&Stack);                               //����
    do
    {
        printf("please enter catalytic constant and hexadecimal number(hexadecimal number=0,end):\n");
        scanf("%d %d",&a, &b);
        if(1==b)
        {
            printf("0\n");
            continue;
        }
        while(a)
        {
            if(ERROR==Push(&Stack, a%b))    //ջ��,����
            {
                printf("Stack full,enter in vain;\n\n");
                break;
            }
            a/=b;
        }

        printf("result:\n");                  //����
        while(ERROR!=Pop(&Stack, &c))
        {
            printf("%d",c);
        }
        printf("\n\n");
        Empty(&Stack);
    }while(b);

    Delete(&Stack);                                //ɾ��ջ
    return 0;
}
