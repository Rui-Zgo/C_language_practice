#include <stdio.h>

int main()
{
	int n;
	__int64 m;
	scanf("%d", &n);
	while( n-- )
	{
		scanf("%I64d",&m);
		//printf("%I64d\n", m);
		printf("%I64d\n",(m*m)%10000);
	}
    return 0;
}
//��Ϊ���ֺܴ����Զ�10000ȡģ.
/*�����,ȡ��4λ������˵�����������10000ȡģ�������ˣ�*/
