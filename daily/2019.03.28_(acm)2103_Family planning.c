#include <stdio.h>

int main()
{
    int t,n,m,count,s,a[35]= {0,1};
    long long int ans;

    for(int i=2; i<=31; i++)
        a[i]=a[i-1]*2+1;

    while(~scanf("%d",&t))
    {
        while(t--)
        {
            count=0;

            scanf("%d%d",&m,&n);
            for(int i=1; i<=n; i++)
            {
                scanf("%d",&s);

                if(count==0&&(i==m||s==1))
                    count=n-i;
            }

            if(m==0)
                count=n;

            ans=(long long)a[count]*10000;
            printf("%lld RMB\n",ans);
        }
    }
    return 0;
}
