#include<stdio.h>
int main()
{
    char y;
    int n,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %c%d",&y,&x);
        if(y>='A'&&y<='Z')
            y=y-'A'+1;
        else if(y>='a'&&y<='z')
            y=-(y-'a'+1);
        printf("%d\n",y+x);
    }
}
