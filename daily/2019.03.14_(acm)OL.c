#include<stdio.h>
int main()
{
int a,b,i,sum,j;
while(~scanf("%d%d",&a,&b))
{
	j=0;
	while(j==b)
{
	sum=0;
	j++;
	for(i=j;i<=a;i++)
	{
		sum+=i;
		if(sum>=b)
			{if(sum==b)  printf("(%d,%d)\n",j,i);
		     break;}
		     
	}
}
//printf("(%d,%d)\n\n",j,i);
printf("%p",&sum);
}}
