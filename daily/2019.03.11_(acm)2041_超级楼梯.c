#include<stdio.h>
int main( )
{
    int a[42];
    int n,i,j,m;
    scanf("%d",&n);
    while(n--)
    {
        a[0]=0,a[1]=1;
        scanf("%d",&m);
        for(i=2; i<=41; i++)
            a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[m]);
    }
    return 0;
}
