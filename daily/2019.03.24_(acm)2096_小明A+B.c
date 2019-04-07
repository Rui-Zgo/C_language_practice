#include<stdio.h>

int main()
{
    int n, a, b, c;

    while(~scanf("%d", &n) && n)

        while(n--)
    {
        scanf("%d %d", &a, &b);

        a%=100;
        b%=100;
        c=a+b;

        printf("%d\n",c%100);
    }

    return 0;
}
