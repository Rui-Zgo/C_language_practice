#include <stdio.h>
#include <math.h>
#define SIZE 1000001

int a[SIZE]={0};

void init()  //����ɸѡ��
{
    int k=1;

    for( int i=2; i<SIZE; i++ )
        if( !a[i] )
        {
            for( int j=i; j<SIZE-1; j+=i )//j��i��i��1�ı���
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
