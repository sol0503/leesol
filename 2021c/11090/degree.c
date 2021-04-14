#include <stdio.h>

int main () {
	float c; //c는 섭씨온도
	float f; //f는 화씨온도

    scanf("%f", &c);

	f = c*9/5 +32;

	printf("%f이다\n",f);

	return 0;

}

