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
}*head;      //���ǵ��ڲ�ͬ�ĺ����ж���Ҫͷָ�룻����extern�����£���head����Ϊȫ�ֱ�����
int n;
void creat()     //��������
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
/*�������ϵ�������ͨ���ж��Ƿ������ض��ַ�����ֹ,so��Ҫ�ഴ��һ�����(�ý������ֹ�ַ�),�������ڶ�������next�ÿգ����һ����㱻����;
 *��������Ҫ������֪�ڵ����������ݣ�so���ϵ�Ҫ�ģ���n�Լ��������������һ��������һ�����next�ÿգ�
 *��δ�����Ż���������δʵ����     // �Ż���   2019.04.03_��(2019.04.02_���ݽṹ_����������Ͳ���_3students)�Ż�   �У�
 */

int main()     //������
{
    void fintlint();
    creat();
    fintlint();
    free(head);   //2019.04.03 ��ӣ�
    return 0;
}

void fintlint()     //��name����
{
    char fs[10];
    printf("please enter the num information of student who is you want:");
    scanf("%s",fs);
    struct student *p=head;
    if(!p) {printf("fint error!");exit(0);}       //���ڷ�Χ�ڣ���ֹ;
    while(p)      //due to������Ҳ������Ա�������±���ٲ��ң�ֻ�ܵ�ַ��ȥ�ң�(p->next!=NULL,����ֵ 0)
    {
       if(strcmp(p->name,fs)==0)
        printf("%s %c %d",p->name,p->sex,p->num); //�ҵ����������
        p=p->next;
    }
}
