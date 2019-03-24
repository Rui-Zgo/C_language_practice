#include<stdio.h>
int main()
{
    int n,i,k,j,a[12];
    while(~scanf("%d",&n))
    {
        k=0;j=0;
        while(n)
        {
            i=n%2;
            n=n/2;
            a[j++]=i;
        }
        while(j--)
            printf("%d",a[j]);
            printf("\n");
    }
}
