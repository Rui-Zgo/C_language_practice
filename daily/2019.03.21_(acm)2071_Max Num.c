#include<stdio.h>
int main()
{
    int n,m,i;
    double x,max;
    scanf("%d",&n);
    while(n--)
    {
        max=0;
        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            scanf("%lf",&x);
            max=max>x?max:x;
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
