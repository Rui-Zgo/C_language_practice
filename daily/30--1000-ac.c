#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    __int64 x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%I64d", &x);
        x=x*x;
        x=x%10000;
        printf("%I64d\n", x);
    }
    return 0;
}
