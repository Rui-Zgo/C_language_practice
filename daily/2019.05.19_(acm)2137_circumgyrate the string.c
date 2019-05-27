#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n, m;
    char a[81];
    while( ~scanf( "%s %d", &a, &n ) )
    {
        n=n%8;
        if(n<0)
            n+=8;    //n可能为负数
        m=strlen( a );

        if( n%4 == 0 )
        {
            for( i=0; i<m; i++)
                if( n == 0 )
                    printf( "%c", a[i] );
                else
                    printf( "%c", a[m-i-1]);
            printf("\n");
        }

        if( n%4 == 1 )
            for( i=m-1; i+1; i-- )
            {
                for( j=0; j<i; j++ )
                    printf(" ");
                if( n == 1 )
                    printf( "%c\n", a[i] );
                else
                    printf( "%c\n", a[m-i-1]);
            }

        if( n%4 == 2 )
            for( i=0; i<m; i++)
            {
                for( j=0; j<m/2; j++ )
                    printf(" ");
                if( n != 2 )
                    printf( "%c\n", a[i] );
                else
                    printf( "%c\n", a[m-i-1] );
            }

        if( n%4 == 3 )
            for( i=0; i<m; i++ )
            {
                for( j=i; j; j--)
                    printf(" ");
                if( n != 3)
                    printf( "%c\n", a[i] );
                else
                    printf( "%c\n", a[m-i-1] );
            }
    }
    return 0;
}
