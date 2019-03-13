#include<stdio.h>
int main()
{
    int n,h,h1,h2,m,m1,m2,m3,s,s1,s2,s3;
    while(~scanf("%d",&n)&&n)
        while(n--)
        {scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
        s=(s1+s1)%60;
        m=(m1+m2)%60+(s1+s2)/60;
        h=h1+h2+(m1+m2)/60;
        printf("%d %d %d\n",h,m,s);
        }
}

