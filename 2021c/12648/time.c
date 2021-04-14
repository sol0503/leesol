#include <stdio.h>
int main()
{
	int total_seconds; //총 초수

	scanf("%d", &total_seconds);

	total_seconds = total_seconds % (24 * 3600); //24시간 * 3600초
	

	//printf(" 날짜 뺀 초수 : %d\n", total_seconds);

	//24시로 먼저 시를 확인하자.
	int hh24 = total_seconds / 3600;
	//printf("24시 형태 : %d\n", hh24);

	if (hh24 <12) {
		printf("오전");
	}else{

		printf("오후");
	}
	int hh12; //12시간 형식으로 표시된 시간.
	hh12 = hh24 % 12;
 	if ( hh12 == 0){
		printf("12시");
	} else {
		printf("%d 시",hh12);
	}

	int remaining_seconds; // 시간 단위 이하의 총 초수
	remaining_seconds =  total_seconds %3600;

	int minutes = minutes = remaining_seconds /60;
	int seconds = remaining_seconds %60;
	printf("%d 분 %d 초 \n", minutes , seconds);
	return 0;

}
