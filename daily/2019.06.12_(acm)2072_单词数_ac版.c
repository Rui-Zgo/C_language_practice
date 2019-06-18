#include <stdio.h>
#include <string.h>

char str[10000];
char words[3000][30];
int main()
{
    char *p;
    while( gets(str)!=NULL &&  str[0]!='#')
    {
        int k=1, j=0, sum=0;

        p=strtok( str , " " );  //记性不太好了,这东东忘了

        while( p )
        {
            if( *p == ' ') continue;
             int flag=1;
                for( int h=0; h<k; h++)
                    if( strcmp( p, words[h] ) == 0 )
                    {
                        flag=0;
                    }
                if( flag )
                {
                    strcpy( words[k++], p );
                    sum++;
                }
          //  printf("%s\n", p);
            p=strtok( NULL, " " );
        }
        printf("%d\n", sum);
    }
    return 0;
}// we are you friend we are you friend
//  we are you we are you friend
//  we are you friend we are you

