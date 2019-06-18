#include <stdio.h>
#include <string.h>

char str[10000];
char words[3000][30];
int main()
{
    while( gets(str)!=NULL &&  str[0]!='#')
    {
        int k=1, j=0, sum=0;
        for( int i=0; i<=strlen(str); i++)
        {

            while( str[i] >='A' && str[i] <='z' )
            {
                words[0][j++]=str[i++];
            }
            words[0][j]='\0';
            if( str[i] == ' ' ||  str[i] == '\0' )
            {
                j=0;
                int flag=1;
                for( int h=1; h<=k; h++)
                    if( strcmp( words[0], words[h] ) == 0 )
                    {
                        flag=0;
                    }
                if( flag )
                {
                    strcpy( words[k++], words[0] );
                    sum++;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}// we are you friend we are you friend
//  we are you we are you friend
//  we are you friend we are you
