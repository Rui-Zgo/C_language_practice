#include<stdio.h>
#include<math.h>
int main()
{
    int qi(int n,int y);
    int m,a,b,x,y;
    while(~scanf("%d",&m)&&m)
        while(m--)
        {
            scanf("%d%d",&a,&b);
            x=qi(a,b);
            y=qi(b,a);
            if(x||y)
                printf("YES\n");
            else
                printf("NO\n");
        }
}
int qi(int n,int y)
{
    int x=0,i,p=1;
    for(i=2; i<sqrt(n); i++)
        if(n%i==0)
            x+=i+n/i;
    return (x+1==y)?1:0;
}
