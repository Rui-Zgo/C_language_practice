#include<stdio.h>
//��ԪԪ�꼴��Ԫһ�꣨û�й�Ԫ0�꣩������ƽ��
//��Ԫһ��һ��һ��Ϊ����һ
int leap(int year)      //�����ж�
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
        if(leap(y))          //1.�����ж������Ƿ�Ϸ�,2.ʹ38�м�������
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
                sum+=1;               //365%7==1;Ŀ��:������ֵ�ۼӹ����ֹsum���
        }
        for(int i=1; i<m; i++)
        {
            sum+=a[i];
        }
        sum+=d;
        sum%=7;                   //����� switch���
        printf("%s\n",day[sum]);
    }
    return 0;
}
