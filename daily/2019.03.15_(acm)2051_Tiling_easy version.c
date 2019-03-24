#include<stdio.h>
int main()
{
    int n,m;
    long long f[35];
    f[1]=1;
    f[2]=3;
    for(int i=3; i<35; i++)
        f[i]=f[i-1]+2*f[i-2];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%lld\n",f[m]);
    }
    return 0;
}
