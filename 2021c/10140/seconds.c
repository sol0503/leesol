#include <stdio.h>

int main () {
	int m;//분
	int s;//초

	scanf("%d",&m);
	scanf("%d",&s);

	printf("%d분 %d초는 총 %d초 입니다.\n", m, s, 60*m+s);

	return 0;
}

