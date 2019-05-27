#include<stdio.h>
int main()
{

     __int64 i,j,k,l,a[10],s;
	a[0]=1;
	for(i=1;i<=10;i++)
	a[i]=a[i-1]*i;
	for(i=1;i<=2147483647;i++)
   {
    	k=i;s=0;
      	while(k)
      	{
      		j=k%10;
      		k=k/10;
      		s=s+a[j];
		  }
		  if(s==i)
	   printf("%I64d\n",i);
   }
	return 0;
}
/*这题建议打表
    #include<stdio.h>
    int main()
    {
        printf("1\n2\n145\n40585\n");
        return 0;
    }
*/
