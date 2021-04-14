#include <stdio.h>

int main () {
	float a; //가속도
	float t; //시간

	scanf("%f", &a);
	scanf("%f",&t);
	
	printf("이동거리는 %f  입니다.\n", 0.5*t*a*t);
	
	return 0;
}
