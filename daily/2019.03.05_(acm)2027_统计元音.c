#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j1,j2,j3,j4,j5;
    char a[101];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        j1=0;
        j2=0;
        j3=0;
        j4=0;
        j5=0;
        gets(a);
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]=='a')
                j1++;
            if(a[i]=='e')
                j2++;
            if(a[i]=='i')
                j3++;
            if(a[i]=='o')
                j4++;
            if(a[i]=='u')
                j5++;
        }
        printf("a:%d\n",j1);
        printf("e:%d\n",j2);
        printf("i:%d\n",j3);
        printf("o:%d\n",j4);
        printf("u:%d\n",j5);
        if(n!=0)
            printf("\n");
    }
    return 0;
}
