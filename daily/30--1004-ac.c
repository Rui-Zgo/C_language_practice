#include <stdio.h>
#include <math.h>

int crrr( int i1 )
{
    int mm=1;

    for(int j=2; j<=i1; j++)
        if( i1%j == 0 )
            mm++;
    return mm;
}

int main()
{
    int t, a, b, i, j, max=0, flag;
    scanf("%d",&t);
    while(t--)
    {
        max=0;
        scanf("%d%d", &a,&b);
        for( i=a; i<=b; i++)
        {
            j=crrr(i);
           if( max < j)
           {
               max=j;
               flag=i;
           }
        }
        printf("%d\n", flag);
    }
    return 0;
}
