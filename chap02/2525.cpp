#include <stdio.h>

int main() 
{ //이문제는 계속 틀렸음, 다시 확인 필요
	int hh, mm, time;
	scanf("%d %d %d", &hh, &mm, &time);

	hh += time / 60;
	mm += time % 60;

	if (mm >= 60) {
		++hh;
		mm -= 60;
	}

	if (hh >= 24) {
		hh -= 24;
	}

	printf("%d %d\n", hh, mm);
	return 0;
}