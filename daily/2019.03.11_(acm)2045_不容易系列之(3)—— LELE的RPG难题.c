#include<stdio.h>
int main( )
{
    long long int i,n,a[55];
    a[1]=3;
    a[2]=6;
    a[3]=6;
    for(i=4; i<55; i++)
        a[i]=a[i-1]+2*a[i-2];
    while(~scanf("%d",&n))
        printf("%lld\n",a[n]);
    return 0;
}
