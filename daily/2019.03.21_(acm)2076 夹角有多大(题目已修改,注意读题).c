#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double h,m,s,oh,om,o;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&h,&m,&s);
        if(h>=12.0)  h-=12.0;
        om=(6.0*m+s/10.0);
        oh=(30.0*h+m/2.0+s/120.0);
        o=fabs(oh-om);
        if(o>180.0)
            o=360.0-o;
	    printf("%d\n",(int)o);
    }
}
