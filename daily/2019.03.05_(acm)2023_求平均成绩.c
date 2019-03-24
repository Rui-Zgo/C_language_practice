#include<stdio.h>
main()
{
    int n,m,i,j,k,h;
    double a[50][6],temp[5];
    while(~scanf("%d%d",&n,&m))
    {
        h=0;
        for(i=0;i<n;i++)
        {
            a[i][5]=0;
            for(j=0;j<m;j++)
                scanf("%lf",&a[i][j]);
        }
        for(j=0;j<m;j++)
            temp[j]=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
        {
            a[i][5]+=a[i][j];
            temp[j]+=a[i][j];
        }
        for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<m;j++)
                if(a[i][j]>=temp[j]/n)
                k++;
            if(k==m)   h++;
        }
        for(i=0;i<n;i++)
            if(i!=n-1)
            printf("%.2f ",a[i][5]/m);
        else
        printf("%.2f\n",a[i][5]/m);
        for(j=0;j<m;j++)
            if(j!=m-1)
            printf("%.2f ",temp[j]/n);
        else
        printf("%.2f\n",temp[j]/n);
        printf("%d\n\n",h);
    }
}
