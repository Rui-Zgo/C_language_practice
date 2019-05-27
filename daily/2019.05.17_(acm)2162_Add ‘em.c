#include <stdio.h>

int main()
{
    int  n, m, p=1;
    while( ~scanf("%d", &n) && n>0 )
    {
    	int sum=0;
    	while( n-- )
			{
				scanf("%d", &m);
				sum+=m;
			}
		printf("Sum of #%d is %d\n", p++, sum);
    }
    return 0;
}

