#include<stdio.h>

int main()
{
    int C,n;

    scanf("%d", &C);
    while(C--)
    {
        scanf("%d", &n);
        if(n<1 || n>9)
            break;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                printf("%d ",i*j);
            }
            printf("%d\n",i*n);
        }
    }
    return 0;
}
//C语言Output Limit Exceeded​  有不必要的输出;
