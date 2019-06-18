#include <stdio.h>
int main()
{
	int n,	r,	e,	c,	sum;
	scanf("%d",&n);
	while( n-- )
	{
		scanf("%d%d%d", &r, &e, &c);
		sum=e-c;
		if(sum>r) printf("advertise\n");
		if(sum==r) printf("does not matter\n");
		if(sum<r) printf("do not advertise\n");
	}
	return 0;
}
