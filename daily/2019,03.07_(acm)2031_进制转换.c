#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,b,c[1000],i,sign;
    while(~scanf("%d%d",&n,&r)&&r!=10)
    {if(r>=2&&r<16)
    sign=n;
    n=abs(n);
       {
        b=n;
        i=0;
        while(b)
        {
            i++;
            c[i]=b%r;
            b=b/r;
        }
        if(sign<0)  printf("-");
        for(; i; i--)
        {
            if(c[i]>9)
                printf("%c",'A'+c[i]-10);
            else
                printf("%d",c[i]);
        }
        printf("\n");
       }
    }
    return 0;
}
