#include <stdio.h>
int main () {
	int age;

	scanf("%d", &age);

	if (age>=0){
		printf("맞음");
	} else {
		printf("틀림");
	} 
	return 0;
}
