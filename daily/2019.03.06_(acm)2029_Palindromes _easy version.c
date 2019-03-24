#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m,p;
    char a[1000];
    while(~scanf("%d",&n)&&n)
    {getchar();
        while(n--)
        {
        gets(a);
        m=strlen(a);
        for(i=0;i<m/2; i++)
        {
            if(a[i]==a[m-i-1])
                p=1;
            else
            {
                p=0;
                break;
            }
        }
        if(p)
            printf("yes\n");
        else
            printf("no\n");
        }
    }
}
