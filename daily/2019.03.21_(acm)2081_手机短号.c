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
//这题主要想偷懒，不想输长了，想起字符和指针；有点爽。
//这题主要想偷懒，不想输长了，想起字符和指针；有点爽。
