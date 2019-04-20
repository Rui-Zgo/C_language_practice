#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define SIZEMOX 100

typedef int       Status;        //函数返回类型;
typedef int       SElemType;    //使用时,可自定义元素项;
typedef struct  Stack      //栈;
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} Sqstack;

Status InitStack(Sqstack *S)  //创建
{
    S->base=(SElemType *)malloc(SIZEMOX*sizeof(SElemType));
    if(!S->base)
        exit(-1);
    S->top=S->base;
    S->stacksize=SIZEMOX;
    return OK;

}

Status Push(Sqstack *S, SElemType e)  //压入
{
    if(S->top-S->base==S->stacksize)              //栈满
        return ERROR;                                     //由于realloc函数缺点太多,不建议扩容;
    *S->top++=e;
    return OK;
}


Status Pop(Sqstack *S, SElemType *e)  //弹出
{
    if(S->top==S->base)
        return ERROR;        //栈空
    S->top--;
    *e=*S->top;
    return OK;
}

Status Empty(Sqstack *S) //清空栈
{
    S->top=S->base;
    return OK;
}

Status Delete(Sqstack *S) //删除栈
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

    InitStack(&Stack);                               //创建
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
            if(ERROR==Push(&Stack, a%b))    //栈满,跳出
            {
                printf("Stack full,enter in vain;\n\n");
                break;
            }
            a/=b;
        }

        printf("result:\n");                  //弹出
        while(ERROR!=Pop(&Stack, &c))
        {
            printf("%d",c);
        }
        printf("\n\n");
        Empty(&Stack);
    }while(b);

    Delete(&Stack);                                //删除栈
    return 0;
}
