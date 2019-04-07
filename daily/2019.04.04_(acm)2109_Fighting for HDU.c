#include<stdio.h>
#include<math.h>

void xzsort(int c[], int n)   //选择排序
{
    int i, j, k, temp;
    for(i=0; i<n-1; i++)
    {
        k=i;
        for(j=i+1; j<n; j++)
            if(c[j]<c[k])
            {
                k=j;
            }
        if(k!=i)
        {
            temp=c[i];
            c[i]=c[k];
            c[k]=temp;
        }
    }
}

int main()
{
    int n, a[101], b[101];

    while(~scanf("%d",&n) && n)
    {
        int a1=0, b1=0, i, j;

        for( i=0; i<n; i++)
            scanf("%d",&a[i]);
        for( j=0; j<n; j++)
            scanf("%d",&b[j]);

        xzsort(a, n);
        xzsort(b, n);

        for( i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                b1+=2;
            }
            else if(a[i]>b[i])
            {
                a1+=2;
            }
            else
            {
                a1++;
                b1++;
            }
        }

        printf("%d vs %d\n",a1, b1);
    }
    return 0;
}
//这个擂台与我想象的不一样。。。。
