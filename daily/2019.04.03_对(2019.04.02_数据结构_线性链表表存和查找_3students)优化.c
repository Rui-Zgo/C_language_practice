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

struct studen *creat()     //��������
{
    struct student *p1,*p2, *head=NULL;
    printf("please enter 3 student's information:\n");
    for(int i=0; i<3; i++)
    {
        p1=malloc(LEN);      //(struct student*)�ɺ���
        scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
        if(i==0)
            head=p1;
        else
            p2->next=p1;
        p2=p1;
    }
    p1->next=NULL;
    return (head);//����:�Ӳ����ݵ�ָ������[- wincompatibility -pointer-types]|����
}
/*//ͨ���ж��Ƿ������ض��ַ�����ֹ
struct studen *creat()     //��������
{
    int i=0;
    struct student *p1,*p2, *head=NULL;
    printf("please enter 3 student's information:\n");
    do
    {
        p1=malloc(LEN);      //(struct student*)�ɺ���
        scanf("%s %c %d",p1->name,&p1->sex,&p1->num);
        if(i==0) head=p1;
        else p2->next=p1;
        p2=p1;
    }while(i++,p1->num!=0);  //����ѧ��num==0ʱ��ֹ
     p1->next=NULL;
     return (head);//����:�Ӳ����ݵ�ָ������[- wincompatibility -pointer-types]|����
}//�����������ˣ��޷����� ���ڶ�������next�ÿգ����һ����㱻���� �Ĳ�����ԭ����43�У�
*/

int main()     //������
{
    void fintlint(struct student *p0);
    struct student *pt;
    pt=creat();    //����:�Ӳ����ݵ�ָ������[-Wincompatible-pointer-types]|����
    fintlint(pt);
    free(pt);        //ע���ͷ��ڴ�
    return 0;
}

void fintlint(struct student *p0)     //��name����
{
    char fs[10];
    printf("please enter the num information of student who is you want:");
    scanf("%s",fs);
    struct student *p=p0;                           //����ı�ͷָ�룻
    if(!p)
    {
        printf("fint error!");    //���ڷ�Χ�ڣ���ֹ;
        exit(0);
    }
    while(p)      //due to������Ҳ������Ա�������±���ٲ��ң�ֻ�ܵ�ַ��ȥ�ң�(p->next!=NULL,����ֵ 0)
    {
        if(strcmp(p->name,fs)==0)
            printf("%s %c %d",p->name,p->sex,p->num); //�ҵ����������
        p=p->next;
    }
}
