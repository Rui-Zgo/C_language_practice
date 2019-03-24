#include<stdio.h>
int main()
{
	int i,n,m;
	while(~scanf("%d",&n))
	{  m=0;
	    for(i=1;i<=n;i++)
        if(n%i==0)
            if(m==0) m=1;
             else  m=0;
        printf("%d\n",m);
	}
	return 0;
}
