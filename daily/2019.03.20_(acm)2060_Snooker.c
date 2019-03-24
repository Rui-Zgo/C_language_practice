#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&m,&i,&j);
        if(m>6)
            i+=27+8*(m-6);
        else
            i +=(15-m)*m/2;
        printf(i>=j?"Yes\n":"No\n");
    }
}
