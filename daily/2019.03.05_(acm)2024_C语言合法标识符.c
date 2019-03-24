#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,p,k;
    char a[50],c;
    while(~scanf("%d",&n)&&n)
    {
        getchar();
        while(n--)
        {
            gets(a);
            p=1;
            k=0;
            if(a[0]=='_'||(a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z'))
                k=1;
            for(i=1; i<strlen(a); i++)
            {
                if(a[i]=='_'||(a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||(a[i]<='9'&&a[i]>='0'))
                {
                    p=1;
                }
                else
                {
                    p=0;
                    break;
                }
            }
            if(p&&k)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
}

