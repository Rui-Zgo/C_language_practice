#include<stdio.h>
#include <string.h>

int main()
{
    double n, j;
    char c, s[201];
    while(~scanf("%c %s", &c, s))
    {
        getchar();   //*******
         j=0.0;
        n=(double)strlen(s);
        for(int i=0; i<n; i++)
        {
            if(c==s[i] ||c==s[i]+32 || c==s[i]-32)  j++;
        }
        printf("%.5lf\n", j/n);
    }
    return 0;
}

