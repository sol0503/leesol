#include <stdio.h>
int main () {
    int a; //a는 거리
	int b; //b는 총 소요시간
	int c; //c는 승객수

	scanf("%d %d %d", &a, &b, &c);

	a= 400*a;
	b= (b/10)*500;
	c= (c-1)*0.05*a;

	printf("거리요금 : %d 시간요금: %d 승객수 요금: %d 이 되며 기본요금을 더하면 총요금은: %d 이다.\n", a, b, c, a+ b+ c+2000);

	return 0;

}
