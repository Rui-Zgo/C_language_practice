#include <stdio.h>

int main()
{
    int N, i, j, p,Q;
    while( ~scanf("%d", &N) )
    {
        if( N == 1)      //赖得为N==1的情况去想，偷个懒；
        {
            printf("%3d\n", N);
            continue;
        }

        p=4*(N-1);    //跑步计数中最大的数，打算从第二行到第N-1行的第一个，和第N行全部的数倒序输出
        Q=1;            //跑步计数中最小的数，打算从第一行的全部，第二行到第N-1行的最后一个的数正序输出
        for( j=1; j<=N; j++)
        {
            for( i=1; i<=N; i++ )
            {
                if( j == 1 )            //从第一行的全部(正序输出）
                    printf("%3d", Q++);
                else if( j == N )   //第二行到第N-1行的第一个（倒序输出）
                    printf("%3d",p--);
                else
                {
                    if( i == 1 )    //第N行全部（倒序输出）
                        printf("%3d", p--);
                    else if( i == N )       //第二行到第N-1行的最后一个（正序输出）
                        printf("%3d", Q++);
                    else
                        printf("   ");
                }
            }
        printf("\n");
        }
    }
    return 0;
}
