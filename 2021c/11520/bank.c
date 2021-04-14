#include <stdio.h>
int main () {
	double a; //a는 원금
	double b; //b는 이자율
	double c; //c는 기간

	printf("원금 :");
	scanf("%lf", &a);

	printf("이자율 :");
	scanf("%lf", &b);

	printf("기간 :");
	scanf("%lf", &c);

	printf("%d원 입니다\n", (int)a+ (int)a*(int)b*(int)c);
    
	return 0;
}
