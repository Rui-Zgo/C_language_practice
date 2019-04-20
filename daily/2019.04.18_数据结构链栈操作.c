#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define SIZE sizeof(StackNode)


typedef int       Status;        //函数返回类型;
typedef int       SElemType;  //使用时,可自定义元素项
typedef struct  Stack      //链栈;
{
    SElemType Data;
    struct  Stack *next ;
} StackNode, *LinkStack;  //

Status InitStack(LinkStack *S)  //创建,顶指针置空,
{/*
    *这里引用二重指针,
    *因为main函数中定义栈指针Stack(即LinkStack  Stack)指向申请的动态存储空间虚拟地址;
    *实参Stack传该形参*S的是main函数中定义的栈指针Stack的虚拟地址;
    *因此对形参S(即栈指针Stack的虚拟地址)操作无意义且错误;
    *若想访问动态存储空间,需要对形参S使用二重指向(即(*S)->? or *(*S).?);
    * //"->" and "."优先级高于"*";不可使用*(S)->?;(因为定义中无该指向指针)
    *以下非main函数同理;
    */
    *S=NULL;
    return OK;

}


Status Push(LinkStack *S, SElemType e)  //压入
{
    StackNode *p=(StackNode *)malloc(SIZE);
    if(!p)  exit(-1);
    p->Data=e;
    p->next=*S;
    *S=p;
    return OK;

}


Status Pop(LinkStack *S, SElemType *e)  //弹出
{
    LinkStack p;
    if(*S==NULL)
        return ERROR;      //栈空
   *e=(*S)->Data;
    p=*S;
    *S=(*S)->next;
    free(p);     //须删除申请的动态存储空间
    return OK;
}

Status GetTop(LinkStack *S, SElemType *e)  //取栈顶
 {
    if(*S!=NULL)
    {
      *e=(*S)->Data;
        return OK;
    }
    return ERROR;
}

Status Delete(LinkStack *S) //删除栈
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
    LinkStack       Stack;       //注意,定义指针,存放申请的动态存储空间;
    SElemType     Data;

    InitStack(&Stack);

    printf("enter munber of node:\n");
    scanf("%d", &Size);

    printf("please enter:\n");
    for(i=0; i<Size; i++)                         //压入
    {
        scanf("%d", &Data);
        if(ERROR==Push(&Stack, Data))
        {
            printf("Stack full,enter in vain;\n\n");
            break;
        }
    }

    printf("\n\nStack top:\n");
    GetTop(&Stack, &Data);                        //取栈顶
    printf("%d\n",Data);

    printf("Stack Pop:\n");
       while(i--)                                                  //弹出
    {
        Pop(&Stack, &Data);
        printf("%d\t",Data);
    }

    printf("\nDelete Stack!");
    Delete(&Stack);                                //删除栈
    return 0;
}
