#include <stdio.h>

// 원래 시간 보다 45분 일찍 알람 울리기
int main() {
	
	int H, M;
	scanf("%d %d",&H, &M);

	M-=45;
	if(M < 0)
	{
		M += 60;
		H -= 1;

		if(H < 0)
		H = 23;
	}

	printf("%d %d", H, M);

	return 0;
}	