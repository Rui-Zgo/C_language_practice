#include <stdio.h>
#include <math.h>
typedef long long LL;    //好坑呀！long long 类型也不说。。。。。。。。。。。。

int judge( LL x, LL y, LL z )
{
    if( x-y == z )
        return 1;   // +,  -
    if( y*z == x || z*x == y )
        return 2;  //*,  //if操作主要防 0 0 3 bug用
    if( ( y!=0 && x%y==z ) ||(  x!=0 && y%x==z ) )
        return 3; // % //同上；
    return 0;
}//return x; 做判断哪步错了

int main()
{
    LL a, b, c, d;
    while( ~scanf("%I64d%I64d%I64d", &a, &b, &c) )
    {
        if( a < b )     //先排序，好算
        {
            d=a;
            a=b;
            b=d;
        }
        if( a < c )
        {
            d=a;
            a=c;
            c=d;
        }
        if( b < c )
        {
            d=b;
            b=c;
            c=d;
        }
        if( judge( a, b, c ) )
            printf("oh,lucky!\n");
        else
            printf("what a pity!\n");
    }
    return 0;
}

