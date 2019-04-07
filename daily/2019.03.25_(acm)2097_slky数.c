#include<stdio.h>

int main()
{
    int shu(int k, int m);
    int n, i, j, k;

    while(~scanf("%d",&n) && n)
    {
        i = shu(n,10);
        j = shu(n,12);
        k =shu(n,16);

        if(i==j && i==k && j==k)
            printf("%d is a Sky Number.\n",n);
        else
            printf("%d is not a Sky Number.\n",n);
    }

    return 0;
}

int shu(int k, int m)      //������ת����m�ǽ���������
{
    int sum=0;

    while(k)
    {
        sum+=k%m;
        k/=m;
    }

    return sum;
}
