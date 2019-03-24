#include<stdio.h>
#include<math.h>
int main()
{
    int x[101],y[101];
    double s;
    int i,n;
    while(~scanf("%d",&n)&&n)
    {
        s=0;
        for(i=0; i<n; i++)
            scanf("%d%d",&x[i],&y[i]);
        if(n<3||n>101)
            break;
        {
            for(i=0; i<n-1; i++)
                s+=(double)(x[i]*y[i+1]-x[i+1]*y[i])/2;
        }
        s+=(double)(x[n-1]*y[0]-y[n-1]*x[0])/2;
        printf("%.1lf\n",s);
    }
}
