#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,k, b[8]= {128, 64, 32, 16, 8, 4, 2, 1};
    char c[36];
    scanf("%d", &n);
    while(n--)
    {
        int a[4]= {0};
        scanf(" %s",c);
        for( i=0; i<32; i++ )
        {
            j=i/8;
            k=i%8;
            if(c[i]=='1')
            {
                a[j]+=b[k];
            }
        }
        printf("%d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
    }
    return 0;
}
