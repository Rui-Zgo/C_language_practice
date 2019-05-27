#include <stdio.h>

int main()    //一个简单的高中概率计算，(n-1)/n*( (n-2)/(n-1) * (n-3)/(n-2) * ..... * 1/(n-K) )  == 1/n;
{
    double n, m;
    while( ~scanf("%lf%lf", &n, &m) )
    printf("%.2lf\n", 1.0/n);
    return 0;
}
