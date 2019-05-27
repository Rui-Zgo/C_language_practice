#include<stdio.h>

int main()  //小学数学题。。。。。。。
{
	int N, k, o;
	scanf("%d",&N);
	while( N-- )
	{
		int cont=0;
		scanf("%d", &k);
		for( int i=0; i<k; i++ )
		{
			scanf("%d",&o);
			cont+=o;
		}
		printf("%d\n",cont-k+1);
	}
	return 0;
}

