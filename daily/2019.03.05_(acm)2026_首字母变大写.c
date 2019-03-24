#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[101];
    while(gets(a)!='\0')
    {
        if(a[0]!=' ')
            a[0]-=32;
        for(i=1; i<strlen(a)-1; i++)
            if(a[i]==' '&&a[i+1]!=' ')
                a[i+1]-=32;
        printf("%s\n",a);
    }
    return 0;
}
