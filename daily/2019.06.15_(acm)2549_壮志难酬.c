#include <stdio.h>
#include <string.h>
int main()
{
    int t, b, n;
   char a[100];
    scanf("%d", &t);
    while( t-- )
    {
        char *p=a;
        memset( a , '0', sizeof(a) );
       scanf("%s %d", a, &b);
       while( *p != '.' )
       {
           p++;
       }
       //printf("%c\n", *p);
       n=strlen( p );
       if(p<7)    //不足6位小数，后面补0，也可后面置换0
       {
           *(p+n)='0';
           *(p+7)='\0';
       }
        printf("%c\n", *(p+b));
    }
    return 0;
}
