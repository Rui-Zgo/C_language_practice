#include<stdio.h>

int main()
{
    int n, m, i;

    while(~scanf("%d",&n) && n)
    {
        i=0;

        while(n--)
        {
            scanf("%d",&m);

            i=i^m;
        }

        printf("%d\n",i);
    }
        return 0;
}
//明说吧，这题不会.看题目好懵。看讨论也好懵；知道异或，不会用；查了一下；
    /* 异或     ：
        （1）     0^b==b                           //0异或任何数都会保留；
        （2）     a==a^b^b                       //异或两次（或偶数次）同一个数仍为原值；
        （3）     a=a^b;b=a^b;a=a^b;     a//无参数换值a，b原理同上，对b；a=[(a^b)^a];对a；a=[(a^b)^b]^{a^b);
    */
