#include <stdio.h>
//��B��  ��ʾ�Ǻ췽����ĺ���
//��L��  ��ʾ�ǻƷ�����ĺ���
//��Y��  ��ʾ����
//��R��  ��ʾ����
//�췽ʤ����� Red
//�Ʒ�ʤ����� Yellow
int main()
{
    int n;
    char m;
    while( ~scanf("%d", &n) && n )
    {
        int a=0, b=0, flag=-1;   //flag=1,��Redʤ��flag=0����Yellowʤ��
        for( int i=0; i<n; i++ )
        {
        	scanf(" %c",&m);//�����ܸо�ת�ۺŻ�Ӱ�����룬��ʵ֤���ǻ�Ӱ��
            if( 'R' == m )      a++;
            if( 'Y' == m )      b++;
            //printf("%-3c",m);
        }
        if( 'B' == m )
            {
            	if( 7 == a ) flag=1;
            	else           flag=0;
            }
		if( 'L' == m )
            {
            	if( 7 == b ) flag=0;
            	else           flag=1;
            }
        if( flag )   printf("Red\n");
        else         printf("Yellow\n");
    }
    return 0;
}
