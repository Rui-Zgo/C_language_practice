/*5: ��5�� ���дһ������void fun(int m,int k,int xx[]),�ú����Ĺ����ǣ�����������m�ҽ���m��k������������xx��ָ�������С�*/
#include<stdio.h>
int main()
{int m=11,k=10,tt[15];
int i=m+1,n=0;
while(k)
{
    int p=1;
    for(int j=2;j<i;j++)
        if(i%j==0)
    {
      p=0;
      break;
    }
    if(p)
    {
        tt[n++]=i;
        k--;
    }
    i++;
}
for(int j=0;j<n;j++)
    printf("%d\n",tt[j]);
    return 0;
}
/*�𰸣�
void fun(int m, int k, int xx[])
{
int g=0,I,j,flag=1;
for(i=m+1;i��m*m;i++)
{
for(j=0;j��I;j++)
{
if(i%j!=0)
flag=1;
else
{
flag=0;
break;
}
}
if (flag==1 && j>=i)
{
if (k>=0)
{
xx[g++]=i;
k--;
}
else
break;
}
}
}*/
