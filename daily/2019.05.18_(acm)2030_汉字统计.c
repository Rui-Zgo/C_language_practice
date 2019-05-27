#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    char s[1024];
    scanf( "%d", &n );
    getchar();
    while( n-- )
    {
        int k=0;
        gets( s );
        for( int j=0; j<strlen(s); j++ )
        {
            if( s[j] < 0 )
                k++;
        }
        printf( "%d\n", k/2 );   //中文字符为2字节且为负数
    }
    return 0;
}

