#include<stdio.h>

int main()   //跟歌手评分那题一样
{
	int N, score;
	while( ~scanf("%d", &N) && N)
	{
		int sum=0;
		int max=-1;
		int min=2147483641;
	    for( int i=0; i<N; i++ )
		{
			scanf("%d",&score);
			if(max<score) max=score;
			if(min>score)  min=score;
			sum+=score;
		}
		printf("%d\n", (sum-max-min)/(N-2));
	}
	return 0;
}
