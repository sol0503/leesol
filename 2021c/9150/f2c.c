#include <stdio.h>

int main() {
	int c; //섭씨 온도
	int f; //화씨 온도

	f = 212; //물 끓는 온도.
	c = (f-32)*5/9;

	printf("%d\n" ,c);
	
	return 0;
}
