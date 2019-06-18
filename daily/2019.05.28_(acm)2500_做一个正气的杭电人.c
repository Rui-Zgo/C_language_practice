#include <stdio.h>

int main()
{
    char *a="HDU";
    //printf("%s\n", a );
    int n, m;
    scanf("%d",&n);
    while( n-- )
    {
        scanf("%d", &m);

        for( int j=0; j<3*m; j++ )
        {
           for( int i=0; i<m; i++ )
                printf("%s", a );
            printf("\n");
        }
    }
    return 0;
}
