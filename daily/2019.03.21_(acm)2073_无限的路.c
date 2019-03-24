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
double zonghe(int x,int y)//从（0，0）到1点距离；
{
    double d=0,b=0,sum;
    int j=x+y,k=0;//数学上直线在X，Y轴的截距；以区分两类直线1,2;
    for(int i=0; i<j; i++)
    {
        b+=sqrt(i*i+(i+1)*(i+1));//1类直线累长；
       k+=i;
    }
    d=(double)(k+j-y)*sqrt(2);//1类直线累长
return d+b;
}
