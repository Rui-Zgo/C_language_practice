#include<stdio.h>
#include<math.h>

int main()
{
    int n, k;
    int js(int m);

    while(~scanf("%d",&n) && n)
    {
        k=0;
                                             //题：把一个偶数拆成两个不同素数的和，有几种拆法呢？
        for(int i=2; i<n/2; i++)   //纠错：    for(int i=1; i<n/2; i++)
            if(js(i) && js(n-i))       // 我并不认为上面循环条件是错的；当n=4时，可分为1，3；有一个结果；
                k++;                    //可这个程序运行结果为0；感觉有误；

        printf("%d\n", k);
    }
    return 0;
}

int js(int m)  //确认素数；
{
    for(int i=2; i<=sqrt(m); i++)
        if(m%i==0)
            return 0;
    return 1;
}
