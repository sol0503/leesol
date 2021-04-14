#include <stdio.h>
int main() {
	int a; //입력할 정수

	scanf("%d",&a);

	if(a>0){
		if(a>=100){
			if(a>999){
	        	printf("NO\n");
            	}else{
		printf("Yes\n");
				}}else{
	    	printf("NO\n");
		}}else{
		printf("NO\n");
	}
	return 0;
}
