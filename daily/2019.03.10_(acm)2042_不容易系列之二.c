#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&i);
        j=3;
        while(i--)
            j=2*(j-1);
        printf("%d\n",j);
    }
}
