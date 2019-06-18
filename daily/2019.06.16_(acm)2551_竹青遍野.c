#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i;
    __int64 X;
    __int64 a[256];
    a[0]=0;
    for( i=1; i<252; i++)
    {
        a[i]=i*i*i+a[i-1];
        //   printf("%d\n", a[i]);
    }
    scanf("%d", &t);
    while( t-- )
    {
        scanf("%I64d", &X);
        for( i=1; i<252; i++ )
            if( X>a[i-1] && X<=a[i] )
            {
                printf("%d\n", i);
                break;
            }
    }
    return 0;
}
