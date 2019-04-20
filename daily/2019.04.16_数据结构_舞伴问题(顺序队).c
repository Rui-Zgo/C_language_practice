#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MOXSIZE 100

typedef struct
{
    char name[10];
    char sex;
} Stu;

typedef struct Que
{
    Stu *base;
    int rear;
    int front;
} Queue;

void Status_InitQueue(Queue *Q)
{
    Q->base=(Stu *)malloc(MOXSIZE*sizeof(Stu));
    if(!Q->base)
    {
        exit(0);
    }
    Q->front=Q->rear=0;
}

int Queue_Length(Queue *Q)
{
    return(Q->rear-Q->front+MOXSIZE)%MOXSIZE;
}

void Status_EnQueue(Queue *Q, Stu e)
{
    if((Q->rear+1)%MOXSIZE==Q->front)
    {
        printf("Âú!");
        return ;
    }
    Q->base[Q->rear]=e;
    Q->rear=(Q->rear+1)%MOXSIZE;

}

void tatus_DeQueue(Queue *Q, Stu *e)
{
    if(Q->rear==Q->front)
    {
        printf("kong!");
        return ;
    }
    *e=Q->base[Q->front];
    Q->front=(Q->front+1)%MOXSIZE;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int  i, j, F_number, M_number;
    Stu b;
    Queue F, M;

    Status_InitQueue(&F);
    Status_InitQueue(&M);

    printf("please enter the name and sex of cast(6):\n");
    for(i=0; i<6; i++)
    {
        scanf("%s %c",b.name, &b.sex);
        if(b.sex=='F'||b.sex=='f')
        {
            Status_EnQueue(&F, b);
        }
        else if(b.sex=='M'||b.sex=='m')
        {
            Status_EnQueue(&M, b);
        }
        else
        {
            printf("´ËÈËÎÞÐ§\n");
            i--;
        }
    }

    M_number=Queue_Length(&M);
    printf("\nM:%d\n",M_number);
    F_number=Queue_Length(&F);
    printf("F:%d\n\n",F_number);

    j=M_number<F_number?M_number:F_number;

    printf("Partner matching:\n");
    for(i=0; i<j; i++)
    {
        tatus_DeQueue(&M,&b);
        printf("%s--",b.name);
        tatus_DeQueue(&F,&b);
        printf("%s\n",b.name);
    }

    if(M_number!=F_number)
    {
        printf("remain");
        i=abs(M_number-F_number);
        printf(M_number<F_number?"F":"M");
        printf(":%dcannot matching", i);
    }
    return 0;
}

