#include<stdio.h>

int main()
{
    int  x,flag=0;

    while(~scanf("%d", &x))
    {
        int b,sum=0;
        if(flag) printf("\n");//又是坑人格式
        flag=1;
        while(x)
        {
            b=x%10;
            if(b%2==0)
            {
                sum+=b;
            }
            x/=10;
        }
        printf("%d\n", sum);
    }
    return 0;
}

