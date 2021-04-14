#include <stdio.h>
int main()
{
	int year;

	scanf("%d",&year);

	if ( year % 4 != 0){
		printf("평년(28)일)\n");
	}else{
		if (year % 100 != 0){
			printf("윤년(29일)\n");
		}else{
			if (year %400 ==0){
				printf("윤년(29일)\n");
			}else{

				printf("평년(28)일)\n");
			}
		}
	}
	return 0;
}
