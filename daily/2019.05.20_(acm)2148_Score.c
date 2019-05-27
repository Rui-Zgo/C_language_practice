#include <stdio.h>

int main()
{
  int T, n, m, p;
  int a[1001];
  scanf("%d", &T);
  while( T-- )
  {
  	p=0;
  	scanf("%d%d", &n, &m);
  	m--;
  	for( int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for( int i=0; i<n; i++)
	{
		if( i == m ) continue;
		if( a[i] > a[m] ) p++;
	}
	printf("%d\n", p);
  }
    return 0;
}
