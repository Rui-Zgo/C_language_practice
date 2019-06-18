/*
 double atan(double x);
atan() 函数的功能是求反正切值。

反正切函数 atan() 和正切函数 tan() 的功能正好相反。tan() 是已知一个角的弧度值 x，求该角的正切值 y；而 atan() 是已知一个角的正切值 y，求该角的弧度值 x
正切值为 x 的角的度数，以弧度表示，区间为(-π/2, π/2)。

注意：atan() 并不能确定角度所在的象限，例如求得的度数是 45°，并不能说明是第一象限的角度，还有可能是第三象限的角度。如果想进一步确定角度所在的象限，请使用 atan2()。

**********************************************************************************************************************
 atan2() 反正切函数，atan() 的增强版，能确定象限

double atan2(double y，double x);
atan2() 函数的功能是求 y/x 的反正切值。atan2() 是 atan() 的增强版，能够确定角度所在的象限。

反正切函数 atan2() 和正切函数 tan() 的功能恰好相反：tan() 是已知一个角的弧度值，求该角的正切值；而 atan2() 是已知一个角的正切值（也就是 y/x），求该角的弧度值。
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//arctan(1/s) = arctan(1/u)+arctan(1/v)

double f( double a, double b, double c)
{
	return b*c-a*b-a*c;
}

int main()
{
	int t;
	scanf("%d", &t);
	while( t-- )
	{
		double s, v, u;
		scanf("%lf%lf", &v, &u);
		s=tan( atan2(1,v) + atan2(1,u) );
		s=1/s;
		//printf("%lf\n", s);
		printf("%.0lf\n", f( s, v, u ));
	}
    return 0;
}

