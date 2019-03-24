#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100],n;
    while(scanf("%s",a)!=EOF)
    {
        n='A';
        for(i=0; i<strlen(a); i++)
            if(n<=a[i])
                n=a[i];
        for(i=0; i<strlen(a); i++)
        {
            printf("%c",a[i]);
            if(a[i]==n)
                printf("(max)");
        }
        printf("\n");
    }
}
