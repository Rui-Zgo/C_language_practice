#include<stdio.h>
int main()
{
	int i,m,n;
	while(~scanf("%d%d",&m,&n))
	{
		printf("+");
		for(i=1;i<=m;i++)
		printf("-");
		printf("+");
		printf("\n");
		for(int y=1;y<=n;y++)
		{
			for(int t=1;t<=m+2;t++)
			{
				if(t==1||t==m+2)
				printf("|");
				else
				printf(" ");
			}
			printf("\n");
		}
		printf("+");
		for(i=1;i<=m;i++)
		printf("-");
		printf("+\n\n");
	}
	return 0;
}
