#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[22], t, j;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for( int i=3; i<22; i++)
        a[i]=a[i-1]+a[i-2];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &j);
        printf("%d\n", a[j]);
    }
    return 0;
}
