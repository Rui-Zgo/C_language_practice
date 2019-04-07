#include<stdio.h>
#include<math.h>

int main()
{
    int n, m, j, k, x;
    char c;

    scanf("%d %c", &n, &c);

    j=m=sqrt((n+1)/2);//（2m-1）*m/2*2+1=n-k;
    k=n-2*j*j+1;//余数

    for(; j>1; j--)//倒三角
    {
    	for(x=m; x>=1; x--)//打印空格
			if(x>j) printf(" ");
			else break;

        for(int h=1; h<=2*j-1; h++)
            printf("%c",c);
        if(j!=0)
            printf("\n");
    }
     /*
		eg:n=19,c='*'
		output:   *****
						***
    */
	j--;
    for(; j<m; j++)//正三角
    {
		for(x=m-1; x>=1; x--)//打印空格
			if(x>j) printf(" ");
			else break;

        for(int h=-1; h<=2*j-1; h++)
            printf("%c",c);
        printf("\n");
    }
     /*
		output:   *
					***
                  *****
    */
    printf("%d",k);
    return 0;
}
