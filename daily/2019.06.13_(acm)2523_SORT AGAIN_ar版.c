#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>

int compar2( const int *a, const int *b )
{
    return *a-*b;
}

void reduce( int num[], int n1, int flag[] )
{
    int i, j, k;
    int stmp, p=0;
    for( i=0; i<n1-1; i++ )
        for( j=i+1; j<n1; j++ )
        {
            stmp=abs(num[i]-num[j]);

            //printf("%-4d",stmp);

            flag[stmp]=1;//哈希，牺牲空间换时间，少一次嵌套循环
        }//（按数组第k个值为1元素输出得结果）
}
/*
int reduce( int num[], int n1, int result[] )
{
    int i, j, k;
    int stmp, p=0;
    for( i=0; i<n1-1; i++ )
        for( j=i+1; j<n1; j++ )
        {
            int flag=1;
            stmp=num[i]-num[j];
            for( k=0; k<=p; k++ )
                if( stmp == result[k] )
                    flag=0;
            if( flag )
                result[p++]=stmp;
        }
        result[p]='\0';
    return p;
}   //Time Limit Exceeded 版（数组排序后,按数组k-1个元素输出得结果）
*/

int main()
{
    int c, n, k, i;
    int a[1024];
    int b[2048];
    scanf("%d", &c);
    while( c-- )
    {
        memset( b, 0, sizeof(b) );
        scanf("%d%d", &n, &k);
        for( i=0; i<n; i++ )
        {
            scanf("%d", &a[i]);
        }
        reduce( a, n, b );

        /*
        printf("\n");
        for(i=0; i<n; i++)
            printf("%-5d",a[i]);
        printf("\n");
        for(i=0; i<2005; i++)
            printf("%-5d",b[i]);
        printf("\n");
        */
        i=0;
        while( k )
        {
            if( b[i++]==1) k--;
        }
        printf("%d\n", i-1);
    }
    return 0;
}
