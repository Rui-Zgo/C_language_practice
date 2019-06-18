#include <stdio.h>

int main()
{
	int n;
	__int64 m;
	scanf("%d", &n);
	while( n-- )
	{
		scanf("%I64d",&m);
		//printf("%I64d\n", m);
		printf("%I64d\n",(m*m)%10000);
	}
    return 0;
}
//因为数字很大，所以对10000取模.
/*这个鬼,取后4位数不明说，用这个“对10000取模”，唬人；*/
