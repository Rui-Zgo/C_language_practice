#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int compar( const int *a, const int *b )
{
    return *b-*a;
}

int reduce( int num[], int n1, int result[] )
{
    int stmp, p=0;
    for( int i=0; i<n1-1; i++ )
        for( int j=i+1; j<n1; j++ )
        {
            int flag=1;
            stmp=abs(num[i]-num[j]);
            for( int k=0; k<=p; k++ )  //Time Limit Exceeded 的原因是嵌套循环多了，
                if( stmp == result[k] )
                    flag=0;
            if( flag )
                result[p++]=stmp;
        }
        result[p]='\0';
    return p;
}

int main()
{
    int c, n, k, i, m;
    int a[1024];
    int b[2048];
    scanf("%d", &c);
    while( c-- )
    {
        memset( b, -1, sizeof(b) );
        scanf("%d%d", &n, &k);
        for( i=0; i<n; i++ )
        {
            scanf("%d", &a[i]);
        }
        m=reduce( a, n, b );
        qsort( b, m, sizeof(int), compar );  //不太熟练

        /*
        for(i=0; i<n; i++)
            printf("%-5d",a[i]);
        printf("\n");
        for(i=0; i<m; i++)
            printf("%-5d",b[i]);
        printf("\n");
        */
        printf("%d\n", b[k-1]);
    }
    return 0;
}
