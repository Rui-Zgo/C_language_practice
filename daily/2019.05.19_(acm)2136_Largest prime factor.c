#include <stdio.h>
#include <math.h>
#define SIZE 1000001

int a[SIZE]={0};

void init()  //素数筛选法
{
    int k=1;

    for( int i=2; i<SIZE; i++ )
        if( !a[i] )
        {
            for( int j=i; j<SIZE-1; j+=i )//j是i的i除1的倍数
                a[j]=k;
                k++;
        }
}

int main()
{
    init();
    int n;
    while( scanf( "%d", &n) != EOF )
		printf( "%d\n", a[n] );
	return 0;
}
