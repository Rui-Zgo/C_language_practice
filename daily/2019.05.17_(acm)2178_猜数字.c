#include <stdio.h>

int main()      //这题好像在哪道面试题里做过,了解一些原理;二分法
{
	int T, n;
	scanf("%d", &T);
	while( T-- )
	{
		int a=1;
		scanf("%d", &n);
		while( n-- )
			a*=2;
		printf("%d\n",a-1);
	}
    return 0;
}
