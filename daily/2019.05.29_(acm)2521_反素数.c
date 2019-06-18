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

		//本来想减少时间复杂度的,但sqrt在int型数据有误差
            /*if( sqrt(i)*sqrt(i) != i )  //4，9, k^2，之类情况
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


