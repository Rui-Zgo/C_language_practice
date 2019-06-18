#include <stdio.h>
//’B’  表示是红方打进的黑球
//’L’  表示是黄方打进的黑球
//’Y’  表示黄球
//’R’  表示红球
//红方胜，输出 Red
//黄方胜，输出 Yellow
int main()
{
    int n;
    char m;
    while( ~scanf("%d", &n) && n )
    {
        int a=0, b=0, flag=-1;   //flag=1,表Red胜，flag=0，表Yellow胜；
        for( int i=0; i<n; i++ )
        {
        	scanf(" %c",&m);//这里总感觉转折号会影响输入，事实证明是会影响
            if( 'R' == m )      a++;
            if( 'Y' == m )      b++;
            //printf("%-3c",m);
        }
        if( 'B' == m )
            {
            	if( 7 == a ) flag=1;
            	else           flag=0;
            }
		if( 'L' == m )
            {
            	if( 7 == b ) flag=0;
            	else           flag=1;
            }
        if( flag )   printf("Red\n");
        else         printf("Yellow\n");
    }
    return 0;
}
