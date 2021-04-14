#include <stdio.h>
int main()
{
	int income;
	int age;
	scanf("%d",&income);
	
	if(income <= 10000000){
		//1000만원 이하.
		printf("1000만 이하\n");
		if (age<60){
			printf(60세 이하);
	}else{
		else {
		//1000만원 초과
		if (income <= 20000000){
		printf("1000만 초과 2000만 이하\n");
		else{
			printf("1000만 초과 2000만 이하 \n");
}
