#include <stdio.h>

int main () {
	int hour; //시간
	int minute; //분
    int second; //초
    
	scanf("%d", &hour);
	scanf("%d", &minute);
	scanf("%d", &second);

	printf("총 %d초 입니다.\n", 60*60*hour+60*minute+second);

	return 0;

}
