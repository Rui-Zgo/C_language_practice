#include <stdio.h>

struct Magichouse
{
    int  num;          //������
    int  times;        //Ƶ��
} a[10000];

int main()              //���Ȿ������������������ֵ�Ƶ��
{
    int t, m, ele, i, j;
    scanf("%d", &t);
    while( t-- )
    {
        int sum=1;
        scanf("%d", &m);
        for( i=1; i<=m; i++)
        {
            int flag=1;
            scanf("%d", &ele);
            for( j=0; j<i; j++)     //���������Ƶ��
                if( a[j].num == ele )
                {
                    a[j].times++;
                    flag=0;              //��ǳ������������Ѵ���
                    break;
                }
            if(flag)        //�����������鲻����ʱ
            {
                a[j].num=ele;
                a[j].times=1;
            }
        }
        for( i=0; i<m; i++ )     //��Ƶ������ֵ
            if( a[i].times>sum )
                sum=a[i].times;
        printf("%d\n", sum);
    }
    return 0;
}
