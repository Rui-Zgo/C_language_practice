#include<stdio.h>
int main()
{
    int n;
    long long f[55];
    f[1]=1;
    f[2]=2;
    scanf("%d",&n);
    for(int i=3; i<55; i++)
        f[i]=f[i-1]+f[i-2];
    while(n--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%lld\n",f[b-a]);
    }
    return 0;
}
