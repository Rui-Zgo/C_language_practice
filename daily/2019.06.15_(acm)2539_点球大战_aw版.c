#include <stdio.h>
#include <string.h>

struct
{
    char a[10];
    int score;
} tream[2];

void output( int n1 )
{
    for( int i=1; i<=n1; i++ )  //..................
    {
        printf("%d ",i);
    }
    printf("score\n");

    for(int k=0; k<2; k++)
    {
        for( int i=0; i<n1; i++ )
        {
            if( i !=0 )
                printf(" ");
            printf("%c", tream[k].a[i]);
        }
        printf(" %d\n", tream[k].score);
    }
}

int main()
{
    int n, m;
    char str[105], *p;
    while( ~scanf("%d", &n) && n )
    {
        getchar();
        tream[0].score=0;
        tream[1].score=0;
        for( int ij=0; ij<n; ij++ )
        {
            int i=ij%2, j=ij/2;
            gets( str );
            m=strlen( str );
            p=&str[m-8];
            //printf("%s\n", p);
            if( strcmp( p, " no good") !=0 )
            {
                tream[i].a[j]='O';
                tream[i].score++;
            }
            else
                tream[i].a[j]='x';
            //printf("%d    %d     %d\n",i, j ,ij);
            //output( n/2 );
        }
        if( n%2 )
        {
            tream[1].a[n/2]='-';
            n++;
        }
        // printf("\n\n");
        output( n/2 );
    }
    return 0;
}
//.....不知道说什么
//这题有毒，至少我找不到能让我出现bug的数据,反倒是不用结构体的，一看很麻烦的代码能过。。。
//用点烦躁。。。。。。。

