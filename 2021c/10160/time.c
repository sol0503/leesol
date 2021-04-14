#include <stdio.h>

int main () {
	int s;//초

	scanf("%d",&s);

	printf("%d시간", s/60/60);
	printf("%d분", s/60%60);
	printf("%d초\n", s%60);

	return 0;
}
