#include<stdio.h>
#include<math.h>
int main()
{
    double zonghe(int x,int y);
    double b,d;
    int i,n,x1,y1,x2,y2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		b=zonghe(x1,y1);
		d=zonghe(x2,y2);
        printf("%.3lf\n",fabs(b-d));
    }
    return 0;
}
double zonghe(int x,int y)//�ӣ�0��0����1����룻
{
    double d=0,b=0,sum;
    int j=x+y,k=0;//��ѧ��ֱ����X��Y��Ľؾࣻ����������ֱ��1,2;
    for(int i=0; i<j; i++)
    {
        b+=sqrt(i*i+(i+1)*(i+1));//1��ֱ���۳���
       k+=i;
    }
    d=(double)(k+j-y)*sqrt(2);//1��ֱ���۳�
return d+b;
}
