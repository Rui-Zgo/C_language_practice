#include <stdio.h>
#include <math.h>
// f(x, y, a, b) + f(x, y, c, d)����ʽ����,��(a,b)���(c,d)����..����������ʽ��
double f( int x, int y, int m, int n )
{
    return sqrt(pow(x-m,2)+pow(y-n,2));
}

int main()
{
    int t;
    double a, b, c, d;
    scanf("%d", &t);
    while( t-- )
    {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        printf("%0.1lf\n",f( a, b, c, d ) );
    }
    return 0;
}
