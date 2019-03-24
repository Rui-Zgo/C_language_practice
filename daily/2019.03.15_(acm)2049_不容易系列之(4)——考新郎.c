#include <stdio.h>
int main()
{
    int  c, n,m, j; 
    long long sum, i, a[21];
    a[1] = 0;
    a[2] = 1;
    for(j = 3; j < 21; j++)
        a[j] = (j - 1) * (a[j-1] + a[j-2]);
    scanf("%d", &c);
    while (c--)
    {
        sum= 1;
        scanf("%d%d", &n,&m);
        for(i = n-m+1; i <= n; i++)
            sum *= i;
        for(i=2; i<=m; i++)
            sum/=i;
        printf("%I64d\n", a[m]*sum);
    }
    return 0;
}
