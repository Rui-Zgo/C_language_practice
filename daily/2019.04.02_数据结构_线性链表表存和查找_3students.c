#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN sizeof(struct student)

struct student
{
    char name[10];
    char sex;
    int num;
    struct student *next;
}*head;      //考虑到在不同的函数中都需要头指针；不用extern条件下，把head定义为全局变量；
int n;
void creat()     //创建链表；
{
    struct student *p1,*p2;
    n=2;
    printf("please enter 3 student's information:\n");
    p1=p2=(struct student*)malloc(LEN);
    scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
    head=NULL;
    while(n--)
    {
        if(n==1) head=p1;
        else  p2->next=p1;
        p2=p1;
        p1=(struct student*)malloc(LEN);
        scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
    }    p2->next=p1;
     p1->next=NULL;
}
/*由于书上的链表是通过判断是否输入特定字符来终止,so需要多创建一个结点(该结点存放终止字符),并在最后第二个结点的next置空，最后一个结点被抛弃;
 *但是我需要的是已知节点数输入数据，so书上的要改，以n自减作计数器，最后一个结点最后一个结点next置空；
 *这段代码可优化；不过暂未实践；     // 优化在   2019.04.03_对(2019.04.02_数据结构_线性链表表存和查找_3students)优化   中；
 */

int main()     //主函数
{
    void fintlint();
    creat();
    fintlint();
    free(head);   //2019.04.03 添加；
    return 0;
}

void fintlint()     //以name查找
{
    char fs[10];
    printf("please enter the num information of student who is you want:");
    scanf("%s",fs);
    struct student *p=head;
    if(!p) {printf("fint error!");exit(0);}       //不在范围内，终止;
    while(p)      //due to链表查找不像线性表可以用下标快速查找，只能地址域去找；(p->next!=NULL,返回值 0)
    {
       if(strcmp(p->name,fs)==0)
        printf("%s %c %d",p->name,p->sex,p->num); //找到条件输出；
        p=p->next;
    }
}
