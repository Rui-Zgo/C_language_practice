#include <stdio.h>
#include <math.h>
typedef long long LL;    //�ÿ�ѽ��long long ����Ҳ��˵������������������������

int judge( LL x, LL y, LL z )
{
    if( x-y == z )
        return 1;   // +,  -
    if( y*z == x || z*x == y )
        return 2;  //*,  //if������Ҫ�� 0 0 3 bug��
    if( ( y!=0 && x%y==z ) ||(  x!=0 && y%x==z ) )
        return 3; // % //ͬ�ϣ�
    return 0;
}//return x; ���ж��Ĳ�����

int main()
{
    LL a, b, c, d;
    while( ~scanf("%I64d%I64d%I64d", &a, &b, &c) )
    {
        if( a < b )     //�����򣬺���
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

