#include <stdio.h>
int main()
{
	int year;
	scanf("%d",&year);

	int a_year;
	int b_year;
	int c_year;
	a_year = year % 4;
	b_year = year % 100;
	c_year = year % 400;

	if(c_year ==0){
		printf("윤년\n");
	}else{
		if(a_year ==0){
			if(b_year ==0){
				printf("평년\n");
			}else{
				printf("윤년\n");
			}
		}else{
			printf("평년\n");
		}

	}
	return 0;
}



