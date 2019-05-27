#include <stdio.h>

int main()
{
	int C, n;
	int team[3];
	scanf("%d", &C);
	while( C-- )
	{
		int header=0;
		scanf("%d", &n);
		team[0]=n/2;
		team[1]=2*(n-team[0])/3;
		team[2]=n-team[0]-team[1];
		for( int i=0; i<3; i++)
		{
			header+=team[i]/10;
			if( team[i]%10 ) header++;
		}
		printf("%d\n", header);
	}
    return 0;
}
