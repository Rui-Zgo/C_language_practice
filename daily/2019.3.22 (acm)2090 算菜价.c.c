#include<stdio.h>
int main()
{
    double jia,shu,zong=0;
    char chai[100];
    while(scanf("%s",chai)!=EOF)
    {
        scanf("%lf%lf",&shu,&jia);
        zong+=shu*jia;
    }
    printf("%.1lf\n",zong);
    return 0;
}
