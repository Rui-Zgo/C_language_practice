#include<stdio.h>
int main()
{
    int n,h[51],i,sum,ci,t=0;
    while(~scanf("%d",&n)&&n)
    {
        sum=0,ci=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        if(t++) printf("\n");//这什么鬼格式哟，交上去一直Presentation Error，看评论才知道。。。。。
        sum/=n;
        for(i=0; i<n; i++)
            if(h[i]-sum>0)
                ci+=h[i]-sum;
        printf("%d\n",ci);
    }
    return 0;
}
