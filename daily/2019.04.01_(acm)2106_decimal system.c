#include<stdio.h>
#include<math.h>

int main()
{
    int n, m, x, sum, a;
    double i,k;    //due to (double)pow(double,double) 为避免误差而设;

    while(~scanf("%d",&n) && n)
    {
        sum=0;  //sum （n个数的每段计算）累加
        while(n--)
        {
            scanf("%d(%d)",&m,&x);
            i=0;
            k=(double)x;
            do
            {
                a=m%10;
                sum+=(int)pow(k,i)*a;//思想：每位数*相应的x方；
                m/=10;
                i++;//‘方’的改变；
            }
            while(m);
        }
            printf("%d\n",sum);
    }
    return 0;
}
