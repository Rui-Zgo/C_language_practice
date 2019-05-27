#include <stdio.h>

struct Magichouse
{
    int  num;          //出现数
    int  times;        //频率
} a[10000];

int main()              //这题本质是求出现数最多的数字的频率
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
            for( j=0; j<i; j++)     //先算出现数频率
                if( a[j].num == ele )
                {
                    a[j].times++;
                    flag=0;              //标记出现数在数组已存在
                    break;
                }
            if(flag)        //出现数在数组不存在时
            {
                a[j].num=ele;
                a[j].times=1;
            }
        }
        for( i=0; i<m; i++ )     //找频率最大的值
            if( a[i].times>sum )
                sum=a[i].times;
        printf("%d\n", sum);
    }
    return 0;
}
