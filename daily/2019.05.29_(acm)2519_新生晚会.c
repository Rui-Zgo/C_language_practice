#include <stdio.h>

int main()
{
	int n, a, b;
	scanf("%d",&n);
	while( n-- )
	{
		__int64 x=1,y=1;
		scanf("%d%d",&a,&b);
		if( a < b ) {printf("0\n"); continue;}
		if( 0 == b )  {printf("1\n"); continue;}
		if( b > a/2 )                //利用高中公式，减少时间复杂度
			b=a-b;
		if( 0 == b )  {printf("1\n"); continue;}
		for( int i=1; i<=b; i++ )
		{
			y*=(a-i+1);
			if( y%i == 0 ) y/=i;  //即使__int64 型在从30乘15也小了,为了减小数值,提前除以可除的数
			else x*=i;
		}
		printf("%I64d\n", y/x);
	}
    return 0;
}
