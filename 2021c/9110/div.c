#include <stdio.h>

int main () {
	int total_seconds, seconds, minutes;
	total_seconds = 129;
	// 아래에 계산 및 출력을 넣는다.
	
	minutes = total_seconds / 60; //분을 계산
	seconds = total_seconds % 60 ; //초를 계산 (초는 60초 미만이어야 한다)

	printf("%d\n%d\n",minutes,seconds);
	//분 초를 출력
	return 0;
}
