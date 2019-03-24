#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[22]= {0};
    int i,j,n,m;
    a[1]=1;
    for(i=2; i<22; i++)
        a[i]=2*a[i-1]+pow(2,i-2);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%I64d\n",a[m]);
    }
}
