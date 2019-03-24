#include<stdio.h>
int main()
{
    char c[100];
    int n,m,i,p;
    double a,b;
    scanf("%d",&n);
    while(n--)
    {
        p=0;
        double suma=0,sumb=0;
        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            scanf("%s %lf %lf",c,&a,&b);
            if(b<60)
                p=1;
            suma+=a*b;
            sumb+=a;
        }
        if(p)
            printf("Sorry!\n");
        else
            printf("%.2f\n",suma*1.0/sumb);
        if(n)
            printf("\n");
    }
    return 0;
}
