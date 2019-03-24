#include<stdio.h>
int main()
{
    int t;
    int min,m,n,x,sum;
    scanf("%d",&t);
    while(t--)
    {
		min=100;
        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            min=min<x?min:x;
        }
        sum=(100-min)*(100-min);
        printf("%d\n",sum);
    }
    return 0;
}
