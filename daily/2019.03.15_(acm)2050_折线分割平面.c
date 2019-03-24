#include <stdio.h>
int main()
{
    int n;
    long long a,i;
    while(~scanf("%d",&n))
        while(n--)
        {
        scanf("%I64d",&i);
        printf("%I64d\n",(2*i-1)*2*i/2+1);
        }
}
