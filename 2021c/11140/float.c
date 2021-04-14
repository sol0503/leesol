#include <stdio.h>
int main () {
	int i;
	float f;
	f = 123456789;
	i = 123456789;

	printf("%d\n", i);
	printf("%f\n", f);

	i =f;
	printf("%d\n", i);
	return 0;
}
// float의 단점은 유효숫자를 정수형에 비해 다 포함하지 못할 수 있다.
