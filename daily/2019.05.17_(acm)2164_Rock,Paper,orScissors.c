#include <stdio.h>
//    R      ʯͷ
//    P      ��
//    S      ����
int main()
{
	int t, n;
	char pa, pb;
	scanf("%d", &t);
	while( t-- )
	{
		int Player1=0, Player2=0;
		scanf("%d", &n);
		while( n-- )
		{
			scanf(" %c %c",&pa, &pb);
			if( (pa=='R' && pb=='P') || (pa=='P' && pb=='S')
				                               || (pa=='S' && pb=='R') )
				Player2++;
			else if(pa==pb);
			else  Player1++;
		}
		if( Player1 == Player2 )  printf("TIE\n");
		else if( Player1 > Player2)   printf("Player 1\n");
		else  printf("Player 2\n");
	}
    return 0;
}
