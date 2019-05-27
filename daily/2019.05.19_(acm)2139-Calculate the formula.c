#include <stdio.h>
#include <math.h>

int main()
{
    __int64  n;
    while( scanf( "%I64d", &n ) != EOF )           //之前输入格式错了。。。
    {
        printf( "%I64d\n", n*(n+1)*(n+2)/6 );
    }
    return 0;
}

