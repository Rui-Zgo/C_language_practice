#include<stdio.h>
#include<math.h>

int main()
{
    int n, m, x, sum, a;
    double i,k;    //due to (double)pow(double,double) Ϊ����������;

    while(~scanf("%d",&n) && n)
    {
        sum=0;  //sum ��n������ÿ�μ��㣩�ۼ�
        while(n--)
        {
            scanf("%d(%d)",&m,&x);
            i=0;
            k=(double)x;
            do
            {
                a=m%10;
                sum+=(int)pow(k,i)*a;//˼�룺ÿλ��*��Ӧ��x����
                m/=10;
                i++;//�������ĸı䣻
            }
            while(m);
        }
            printf("%d\n",sum);
    }
    return 0;
}
