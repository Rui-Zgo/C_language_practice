#include <stdio.h>

int main()      //����������ĵ�������������,�˽�һЩԭ��;���ַ�
{
	int T, n;
	scanf("%d", &T);
	while( T-- )
	{
		int a=1;
		scanf("%d", &n);
		while( n-- )
			a*=2;
		printf("%d\n",a-1);
	}
    return 0;
}
