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
		if( b > a/2 )                //���ø��й�ʽ������ʱ�临�Ӷ�
			b=a-b;
		if( 0 == b )  {printf("1\n"); continue;}
		for( int i=1; i<=b; i++ )
		{
			y*=(a-i+1);
			if( y%i == 0 ) y/=i;  //��ʹ__int64 ���ڴ�30��15ҲС��,Ϊ�˼�С��ֵ,��ǰ���Կɳ�����
			else x*=i;
		}
		printf("%I64d\n", y/x);
	}
    return 0;
}
