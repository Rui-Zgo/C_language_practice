#include <stdio.h>
#include <stdlib.h>

struct
{
    int a, b;
} n[55], temp;

void Meger( int o1 )
{
    for( int i=0; i<o1-1; i++ )
    {
        int k=i;
        for( int j=i+1; j<o1; j++)
            if(n[j].a<n[k].a)
            {
                k=j;
            }
        if( k != i )
        {
            temp=n[i];
            n[i]=n[k];
            n[k]=temp;
        }
    }
}

int main()
{
    int t, o;
    scanf("%d", &t);
    while( t-- )
    {
        scanf("%d", &o);
        for(int k=0; k<o; k++)
        {
            scanf("%d%d", &n[k].a, &n[k].b);
        }
        Meger( o );
        for(int k=0; k<o; k++)
        {
            while( n[k].b-- )
            {
                printf(">+");
                for(int i=0; i<n[k].a-2; i++)
                    printf("-");
                printf("+>\n");
            }
                printf("\n");
        }
    }
    return 0;
}
