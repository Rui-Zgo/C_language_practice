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
        return ERROR;//栈空
    S->top--;
    *e=*S->top;
    return OK;
}

int StackLength(Sqstack S)  //栈长
{
    return S.top-S.base;
}

/*
 *SElemType GetTop(Sqstack S)  //取栈顶
 *{
 *   if(S.top!=S.base)
 *       return  *(S.top-1);
 *} //D:\IOS C编程语言。警告:控制达到非空函数[-Wreturn-type]|结束
*/

Status GetTop(Sqstack *S, SElemType *e)  //取栈顶
 {
    if(S->top!=S->base)
    {
        *e=*(S->top-1);
        return OK;
    }
    return ERROR;
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

	freopen("in.txt" , "r" , stdin);
    int                Size,       i,      j;
    Sqstack         Stack;
    SElemType     Data;

    InitStack(&Stack);

    printf("enter munber of node:\n");
    scanf("%d", &Size);
    printf("\nSize: %d\n ", Size);

    //printf("please enter:\n");
    for(i=0; i<Size; i++)                         //压入
    {
        scanf("%d", &Data);
        if(ERROR==Push(&Stack, Data))
        {
            printf("Stack full,enter in vain;\n\n");
            break;
        }
    }

    j=StackLength(Stack);                       //栈长
    printf("Stack length: %d\n", j);

    if(OK==GetTop(&Stack, &Data))                        //取栈顶
    printf("StackTop:%d\n",Data);
    else printf("No!\n");

    printf("\n\nStack top:\n");                  //弹出
    while(i--)
    {
        Pop(&Stack, &Data);
        printf("%d\t",Data);
    }

    Empty(&Stack);                                 //清空栈
    Delete(&Stack);                                //删除栈
    fclose(stdin);
    return 0;
}
