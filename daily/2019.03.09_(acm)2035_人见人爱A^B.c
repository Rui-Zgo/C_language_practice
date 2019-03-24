#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,c;
    while(~scanf("%d%d",&a,&b)&&(a||b))
        if(b<=10000&&a>=1)
        {
            c=a;
            for(i=1; i<b; i++)
            {
                a=a*c;
                a=a%1000;
            }
            printf("%d\n",a);
        }
}
