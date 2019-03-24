#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            return 0;
        int a[100],b[100],c[100],t=0,h;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=0; j<m; j++)
            {
                if(a[i]==b[j])
                    count++;
            }
            if(count==0)
            {
                c[t]=a[i];
                t++;
            }
        }
        if(t==0)
            printf("NULL\n");
        else
        {
            for(int i=0; i<t; i++)
                for(int j=i; j<t; j++)
                {
                    if(c[i]>c[j])
                    {
                        h=c[i];
                        c[i]=c[j];
                        c[j]=h;
                    }
                }
            for(int i=0; i<t; i++)
                printf("%d ",c[i]);
            printf("\n");
        }
    }
    return 0;
}
