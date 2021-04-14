#include <stdio.h>

int main () {
	int v0;//초기속도
	int a; // 가속도 
	int t; // 시간


    scanf("%d", &v0);
	scanf("%d", &a);
	scanf("%d", &t);

	
	printf("속도는 %d\n", v0 + a*t);

	return 0;
}
