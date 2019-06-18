#include <stdio.h>
#include <string.h>
int hash[10005], addist[10005];

int main()
{
    int t, n;
    int k;
    scanf("%d", &t);
    while( t-- )
    {
        int sum=-2, flag=0;
        scanf("%d", &n);
        memset( hash, 0, sizeof(hash) );
        memset( addist, 0, sizeof(addist) );
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &hash[i]);
            addist[hash[i]]=i; //��ϣ����ֵһ��λ��

           // printf("%-3d%-8d", hash[i], addist[hash[i]]);

        }
        for(int i=1; i<n-1; i++ )  //��Ϊ��Ŀ,���ǿ��Բ������������,���,�������ż�
        {
            for(int j=i+2; j<=n; j++ )
                //printf("i,%d   j,%d\n", i, j);
            {
                sum=(hash[i]+hash[j]);

               // printf("\n-----%d-----\n",sum);
               // printf("%d    %d    %d+++++\n",i,addist[sum/2], j);

                if( sum%2 == 0 )  sum/=2;
                else continue;
                if( addist[sum]<j && addist[sum]>i ) //λ���ж���
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        printf( flag>0?"Y":"N");
        printf("\n");
    }
    return 0;
}
