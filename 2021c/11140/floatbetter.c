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
