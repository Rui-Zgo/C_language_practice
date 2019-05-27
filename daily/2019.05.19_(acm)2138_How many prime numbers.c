#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, i, m;
    while( ~scanf( "%d", &n ) )
    {
        int p=0;
        while( n-- )
        {
            scanf( "%d", &x );
            m=sqrt( x );
            for( i=2; i<=m; i++)
            {
                if( x%i == 0)
                    break;
            }
            if( i>m )
                p++;
        }
        printf( "%d\n", p );
    }
    return 0;
}

