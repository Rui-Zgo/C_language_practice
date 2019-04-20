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
        return ERROR;//ջ��
    S->top--;
    *e=*S->top;
    return OK;
}

int StackLength(Sqstack S)  //ջ��
{
    return S.top-S.base;
}

/*
 *SElemType GetTop(Sqstack S)  //ȡջ��
 *{
 *   if(S.top!=S.base)
 *       return  *(S.top-1);
 *} //D:\IOS C������ԡ�����:���ƴﵽ�ǿպ���[-Wreturn-type]|����
*/

Status GetTop(Sqstack *S, SElemType *e)  //ȡջ��
 {
    if(S->top!=S->base)
    {
        *e=*(S->top-1);
        return OK;
    }
    return ERROR;
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

	freopen("in.txt" , "r" , stdin);
    int                Size,       i,      j;
    Sqstack         Stack;
    SElemType     Data;

    InitStack(&Stack);

    printf("enter munber of node:\n");
    scanf("%d", &Size);
    printf("\nSize: %d\n ", Size);

    //printf("please enter:\n");
    for(i=0; i<Size; i++)                         //ѹ��
    {
        scanf("%d", &Data);
        if(ERROR==Push(&Stack, Data))
        {
            printf("Stack full,enter in vain;\n\n");
            break;
        }
    }

    j=StackLength(Stack);                       //ջ��
    printf("Stack length: %d\n", j);

    if(OK==GetTop(&Stack, &Data))                        //ȡջ��
    printf("StackTop:%d\n",Data);
    else printf("No!\n");

    printf("\n\nStack top:\n");                  //����
    while(i--)
    {
        Pop(&Stack, &Data);
        printf("%d\t",Data);
    }

    Empty(&Stack);                                 //���ջ
    Delete(&Stack);                                //ɾ��ջ
    fclose(stdin);
    return 0;
}
