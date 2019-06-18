#include <stdio.h>
#include <math.h>
/*
逻辑辩解题：
#include <math.h>
double floor(double x); 返回的是小于或等于x的最大整数。//向下取整
double ceil(double x);返回的是大于x的最小整数。  //向上取整
可惜是double类型的
*/

int Partition( int a[], int low, int high )
{
    int temp=a[low];
    while( low < high )
    {
        while( low < high && a[high]>=temp )
            high--;
        a[low]=a[high];
        while( low < high && a[low]<=temp )
            low++;
        a[high]=a[low];
    }
    a[low]=temp;
    return low;
}

void QSort( int a[], int low, int high )
{
    int mid;
    if( low< high )
    {
        mid=Partition( a, low, high );
        QSort( a, low, mid-1 );
        QSort( a, mid+1, high);
    }
}

int main()
{
    int n, m[102];
    while( ~scanf("%d", &n) && n )
    {
        int  aver=0;
        for( int i=0; i<n; i++ )
            scanf("%d", &m[i]);
        QSort( m, 0, n-1 );  //快速排序，想练下
        /*
        for( int i=0; i<n; i++ )
            printf("%-5d",m[i]);
            printf("\n");
		*/
        for( int i=0; i<n/2+1; i++)
        {
            aver+=m[i]/2+1;
        }
        printf("%d\n",aver);
    }
    return 0;
}

