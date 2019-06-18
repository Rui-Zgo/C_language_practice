#include <stdio.h>
/*
//公式自己推的:n*(n+1)/2 * m*(m+1)/2;
当m为1时（或对于每行）, 计算时可知规律为1+2+3+...+n即n*(n+1)/2个矩形;
当m为任意值,可看做有1+2+3+...+n即n*(n+1)/2行;
得公式：n*(n+1)/2 * m*(m+1)/2;
*/
int main()
{
    int n, m, t;
    scanf("%d", &t);
    while( t-- )
	{
		scanf("%d%d", &n, &m);
		printf("%d\n", n*(n+1)*m*(m+1)/4);
	}
    return 0;
}
