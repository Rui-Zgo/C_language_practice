#include<stdio.h>
#include <math.h>

int main()
{
    long long n, a[4]= {0};
    while(~scanf("%I64d",&n))
    {
        long long sum=0;
        n=n%10000;
        sum=n*n*(n+1)*(n+1)/4;   //���е���ѧ��ʽ1^3+2^3+3^3+.....+n^3=pow(n(n+1)/2.0,2.0);
        for(n=3; n+1; n--)            //��ǰ��0 and ȡ����λ����
        {
            a[n]=sum%10;
            sum/=10;
        }
        for(n=0; n<4; n++)
            printf("%I64d",a[n]);
        printf("\n");
    }
    return 0;
}

