#include <stdio.h>

int main () {
	double d; //지름
	double Pi = 3.14;
	scanf("%lf", &d);

	printf("면적은: %.4lf입니다.\n", (d*0.5)*(d*0.5)*Pi);
	
	return 0;
}
