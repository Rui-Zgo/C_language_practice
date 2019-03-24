 #include<stdio.h>
int main()
{
    long long ar[45]= {3,8},n;
    for(int i=2; i<=42; i++)
        ar[i]=2*ar[i-1]+2*ar[i-2];
    while(~scanf("%d",&n))
        printf("%lld\n",ar[n-1]);
}
