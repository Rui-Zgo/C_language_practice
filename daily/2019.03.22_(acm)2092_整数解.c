#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,n,m;
    while(~scanf("%d%d",&n,&m)&&(n||m))  //ԭ�������㷨��aw�ˣ������Ԫһ�η������ԭ��
        (int)sqrt(n * n - 4 * m) == sqrt(n * n - 4 * m) ? puts("Yes") : puts("No");
    /*�жϡ��Ƿ���С����
      printf("%d       %.3lf\n\n",(int)sqrt(n * n - 4 * m),sqrt(n * n - 4 * m));
      input       9      15
      output     4      4.583
      input       5      4
      output     3      3.00
      input       1      -56
      output     15    15.000
    */
    return 0;
}
