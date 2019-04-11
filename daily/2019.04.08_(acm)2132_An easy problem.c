#include<stdio.h>

int main()
{
    long long a[100024], n, i;//i,nÐè×ª»»Îªlong long  due to 10^5=10^3*10^>2^10*2^6;¼´10^5>2^16
    a[0]=0;
    a[1]=1;
    for(i=2; i<=100000; i++)
    {
        if(i%3==0)
            a[i]=a[i-1]+i*i*i;
        else
            a[i]=a[i-1]+i;
    }
     while(scanf("%I64d", &n)!=EOF && n>=0)
    {
        printf("%I64d\n", a[n]);
    }
    return 0;
}
