#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,y,z,i;
    while(~scanf("%d %d",&a,&b)){
		for(i=a;i<=b;i++){
		x=i/100;
	y=(i/10)%10;
	z=i%10;
	if(i==x*x*x+y*y*y+z*z*z)
		
				printf("%d   ",i);
		}}
		
    return 0;
}
