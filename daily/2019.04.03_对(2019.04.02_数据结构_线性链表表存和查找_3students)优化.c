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
};

struct studen *creat()     //创建链表；
{
    struct student *p1,*p2, *head=NULL;
    printf("please enter 3 student's information:\n");
    for(int i=0; i<3; i++)
    {
        p1=malloc(LEN);      //(struct student*)可忽略
        scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
        if(i==0)
            head=p1;
        else
            p2->next=p1;
        p2=p1;
    }
    p1->next=NULL;
    return (head);//警告:从不兼容的指针类型[- wincompatibility -pointer-types]|返回
}
/*//通过判断是否输入特定字符来终止
struct studen *creat()     //创建链表；
{
    int i=0;
    struct student *p1,*p2, *head=NULL;
    printf("please enter 3 student's information:\n");
    do
    {
        p1=malloc(LEN);      //(struct student*)可忽略
        scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
        if(i==0) head=p1;
        else p2->next=p1;
        p2=p1;
    }while(i++,p1->num!=0);  //输入学生num==0时终止
     p1->next=NULL;
     return (head);//警告:从不兼容的指针类型[- wincompatibility -pointer-types]|返回
}//又遇到问题了：无法进行 最后第二个结点的next置空，最后一个结点被抛弃 的操作；原因在43行；
*/

int main()     //主函数
{
    void fintlint(struct student *p0);
    struct student *pt;
    pt=creat();    //警告:从不兼容的指针类型[-Wincompatible-pointer-types]|分配
    fintlint(pt);
    free(pt);        //注意释放内存
    return 0;
}

void fintlint(struct student *p0)     //以name查找
{
    char fs[10];
    printf("please enter the num information of student who is you want:");
    scanf("%s",fs);
    struct student *p=p0;                           //不想改变头指针；
    if(!p)
    {
        printf("fint error!");    //不在范围内，终止;
        exit(0);
    }
    while(p)      //due to链表查找不像线性表可以用下标快速查找，只能地址域去找；(p->next!=NULL,返回值 0)
    {
        if(strcmp(p->name,fs)==0)
            printf("%s %c %d",p->name,p->sex,p->num); //找到条件输出；
        p=p->next;
    }
}
