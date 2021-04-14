#include <stdio.h>
#include <math.h>

int main () {
	double a;
	double b;
	double c;
    double alpha;
	double betha;

	scanf("%lf %lf %lf",&a, &b, &c);
	
	alpha = (-b + sqrt(b*b - 4*a*c)) / (2.0 * a);
	betha = (-b - sqrt(b*b - 4*a*c)) / (2.0 * a);

	printf("두근은 %.lf와  %.lf입니다.\n",alpha, betha);

	return 0;
}
