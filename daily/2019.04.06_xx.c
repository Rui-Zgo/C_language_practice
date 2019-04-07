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
    void name_Merger(struct cmp *a, int m);
    void time_Merge(struct cmp *a, int m);
    int j=0, n, h, min;

    while(scanf("%d", &n) && n)
    {
        if(j)  printf("\n");
        j++;

        for(int i=0; i<n; i++)
        {
            scanf("%s %d:%d",ren[i].name, &h, &min);
            ren[i].zo=h*60+min;
        }

        name_Merger(ren, n);
        time_Merge(ren, n);
        sort(ren, n);
        printf("case #%d\n",j);
        for(int i=0; i<n; i++)
            printf("%s %d\n",ren[i].name,ren[i].num);
    }
    return 0;
}

void name_Merger(struct cmp *a, int m) //name Ñ¡ÔñÅÅÐò
{
    int i, j, k;
    for(i=0; i<m-1; i++)
    {
        k=i;
        for(j=i+1; j<m; j++)
            if(strcmp(a[j].name,a[k].name)<0)
                k=j;
        if(k!=i)
        {
            struct cmp temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    }
}

void time_Merge(struct cmp *a, int m)   // time Ñ¡ÔñÅÅÐò
{
    int i, j, k;
    for(i=0; i<m-1; i++)
    {
        k=i;
        for(j=i+1; j<m; j++)
            if((a[j].zo<a[k].zo))
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
    if(a[i].zo==a[i-1].zo)  a[i].num=a[i-1].num;
    else    a[i].num=i+1;
}
