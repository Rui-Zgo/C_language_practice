#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    while(~scanf("%d%d",&m,&n)&&m&&n){
        int s,max=0,r= 0,x,y;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++){
                scanf("%d",&s);
                if(fabs(s)>max){
                    max = fabs(s); r= s;
                    x = i; y = j;
                }
            }
        printf("%d %d %d\n",x,y,r);
    }
    return 0;
}
