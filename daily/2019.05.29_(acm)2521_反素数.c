#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    while( n-- )
    {
        int maxtimes=0, num=1;
        scanf("%d%d", &a, &b);
        for( int i=a; i<=b; i++ )
        {
            int times=0;
            for( int j=1; j<=b; j++ )
            {
                if( i%j == 0 )
                    times++;
            }

		//���������ʱ�临�Ӷȵ�,��sqrt��int�����������
            /*if( sqrt(i)*sqrt(i) != i )  //4��9, k^2��֮�����
                times++;*/


            if( maxtimes < times )
            {
                maxtimes=times;
                num=i;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}


