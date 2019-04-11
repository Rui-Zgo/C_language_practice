#include<stdio.h>
//公元元年即公元一年（没有公元0年）此年是平年
//公元一年一月一日为星期一
int leap(int year)      //闰年判断
{
    if((year%4==0 && year%100!=0) || year%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    char day[8][10]= {{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};
    int y, m, d;

    while(~scanf("%d %d %d", &y, &m, &d))
    {
        int  sum=0;
        if(leap(y))          //1.方便判断输入是否合法,2.使38行计算无误
            a[2]=29;
        else
            a[2]=28;

        if((y<1 ||y>10000) || (m<1 || m>12) || (d<1 || d>a[m]))
        {
            printf("illegal\n");
            continue;
        }

        for(int i=1; i<y; i++)
        {
            if(leap(i))
                sum+=2;                //366%7==2;
            else
                sum+=1;               //365%7==1;目的:避免数值累加过大防止sum溢出
        }
        for(int i=1; i<m; i++)
        {
            sum+=a[i];
        }
        sum+=d;
        sum%=7;                   //不想打 switch语句
        printf("%s\n",day[sum]);
    }
    return 0;
}
