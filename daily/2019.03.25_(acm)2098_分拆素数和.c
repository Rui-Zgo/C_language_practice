#include<stdio.h>
#include<math.h>

int main()
{
    int n, k;
    int js(int m);

    while(~scanf("%d",&n) && n)
    {
        k=0;
                                             //�⣺��һ��ż�����������ͬ�����ĺͣ��м��ֲ��أ�
        for(int i=2; i<n/2; i++)   //����    for(int i=1; i<n/2; i++)
            if(js(i) && js(n-i))       // �Ҳ�����Ϊ����ѭ�������Ǵ�ģ���n=4ʱ���ɷ�Ϊ1��3����һ�������
                k++;                    //������������н��Ϊ0���о�����

        printf("%d\n", k);
    }
    return 0;
}

int js(int m)  //ȷ��������
{
    for(int i=2; i<=sqrt(m); i++)
        if(m%i==0)
            return 0;
    return 1;
}
