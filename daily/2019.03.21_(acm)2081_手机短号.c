#include<stdio.h>
int main()
{
    char a[12],*p;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        p=a;
        p+=5;
        *p='6';
        printf("%s\n",p);
    }
    return 0;
}
//������Ҫ��͵���������䳤�ˣ������ַ���ָ�룻�е�ˬ��
//������Ҫ��͵���������䳤�ˣ������ַ���ָ�룻�е�ˬ��
