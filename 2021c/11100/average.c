#include <stdio.h>
int main () {
	double a;
	double b;
	double s; // 산술평균
	double t; // 조화평균

    scanf("%lf %lf",&a,&b);

    s = (a+b)*0.5;
    t = 2/s;

    printf("산술평균은 %.2lf \n조화평균은 %.2lf 입니다.\n", s,t);

    return 0;   
}
