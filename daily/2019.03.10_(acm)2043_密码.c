#include <stdio.h>
#include<string.h>
int main()
{
    char a[51];
    int i,p,p1,p2,p3,p4,c,n,m;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        m=strlen(a);
        p1=0;
        p2=0;
        p3=0;
        p4=0;
        if(m>=8&&m<=16)
        {
            for(i=0; (c=a[i])!='\0'; i++)
                if(c>='0'&&c<='9')
                    p1=1;
                else if(c<='z'&&c>='a')
                    p2=1;
                else if(c<='Z'&&c>='A')
                    p3=1;
                else
                    p4=1;
        }
        p=p1+p2+p3+p4;
        printf(p>=3?"YES\n":"NO\n");
    }
}
