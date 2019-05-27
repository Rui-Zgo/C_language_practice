#include <stdio.h>
#include <math.h>

int main()
{
    int  n, m, i, p=1;
    while( ~scanf("%d", &n) && n>0 )
    {
        if( n==0 || n==1 || n==2 )
        {
            printf("%d: no\n", p++);
            continue;
        }
        m=sqrt(n);
        for( i=2; i<=m; i++ )
            if( n%i == 0 )
                break;
        printf("%d: ", p++);
        printf( i>m?"yes\n":"no\n" );
    }
    return 0;
}

