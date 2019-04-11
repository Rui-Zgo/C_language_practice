#include<stdio.h>
#include <string.h>
struct cmp
{
    char name[50];
    int zo;
    int num;
} ren[11];

int main()
{
    void sort(struct cmp *a, int m);
    void Merge(struct cmp *a, int m);
    int flag=0, n, h, min;

    while(scanf("%d", &n) && n)
    {
        if(flag) printf("\n");
        flag++;
        for(int i=0; i<n; i++)
        {
            scanf("%s %d:%d",ren[i].name, &h, &min);
            ren[i].zo=h*60+min;
        }

        Merge(ren, n);
        sort(ren, n);
        printf("case #%d\n",flag);
        for(int i=0; i<n; i++)
            printf("%s %d\n",ren[i].name,ren[i].num);
    }
    return 0;
}

void Merge(struct cmp *a, int m)   //  Ñ¡ÔñÅÅÐò
{
    int i, j, k;
    for(i=0; i<m-1; i++)
    {
        k=i;
        for(j=i+1; j<m; j++)
            if((a[j].zo<a[k].zo) ||((a[j].zo<a[k].zo) && strcmp(a[j].name,a[k].name)<0))
                k=j;


        if(k!=i)
        {
            struct cmp temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    }
}

void sort(struct cmp *a, int m)             //±àÐò
{
    int i;
    a[0].num=1;
    for(i=1; i<m; i++)
        if(a[i].zo==a[i-1].zo)
            a[i].num=a[i-1].num;
        else
            a[i].num=i+1;
}
