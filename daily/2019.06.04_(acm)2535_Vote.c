#include <stdio.h>
#include <math.h>
/*
�߼�����⣺
#include <math.h>
double floor(double x); ���ص���С�ڻ����x�����������//����ȡ��
double ceil(double x);���ص��Ǵ���x����С������  //����ȡ��
��ϧ��double���͵�
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
        QSort( m, 0, n-1 );  //��������������
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

