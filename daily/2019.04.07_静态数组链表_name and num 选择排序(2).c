
#include<stdio.h>
#include<string.h>
int main1()
{
    int n,k=1,i,l,h=0;
E:    while(scanf("%d",&n)&&n)
    {
        char s[12][1000];
        for(l=1;l<=n;l++)
        {
            if(h)
                printf("\n");
            int a,b,d[100],j;
            for(i=0;i<n;i++)
            {
                scanf("%s %d:%d",s[i],&a,&b);
                d[i]=a*60+b;
            }
            for(i=0;i<n;i++)
                for(j=0;j<n-1-i;j++)
                    if(d[j]>d[j+1])
                    {
                        d[j]^=d[j+1];d[j+1]^=d[j];d[j]^=d[j+1];
                        char c[100]={0},v[100]={0};
                        strcpy(c,s[j]);
                        strcpy(v,s[j+1]);
                        memset(s[j],0,sizeof(s[j]));
                        memset(s[j+1],0,sizeof(s[j+1]));
                        strcpy(s[j],v);
                        strcpy(s[j+1],c);
                    }
            printf("Case #%d\n",k++);
            for(j=1,i=0;i<n;i++,j++)
            {
                if(d[i]==d[i-1])
                    j--;
                printf("%s %d\n",s[i],j);
                if(d[i]==d[i-1])
                    j+=1;
            }
            h=1;
            goto E;
        }

    }
    return 0;
}
