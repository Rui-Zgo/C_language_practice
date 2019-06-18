#include <stdio.h>

int main()
{
	int n, w, d, sum, cont, k;//สýังฬโ
	while( ~scanf("%d%d%d%d", &n, &w, &d, &sum) )
	{
		cont=w*n*(n-1)/2;
		k=(cont-sum)/d;
		if( !k ) printf("%d\n",n);
		else printf("%d\n",k);
	}

	return 0;
}
