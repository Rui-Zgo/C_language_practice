#include<stdio.h>
#include<math.h>
int main()
{
    void sort(int p[],int n);
    int m,a[501],i,k;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&k);
        for(i=0; i<k; i++)
            scanf("%d",&a[i]);
        sort(a,k);
    }
    return 0;
}

void sort(int *p,int n)//不知道void sort(int p[],int n)为什么输出一窜不知道什么鬼的数字；
{
    int i,x,min1,j;
    for(j=0; j<n; j++)
    {
        x=0;
        for(i=0; i<n; i++)
            x+=abs(p[i]-p[j]);
        if(j==0)
            min1=x;
        else
            min1=x<min1?x:min1;
    }
    printf("%d\n",min1);
    return 0;
}
