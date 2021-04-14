#include <stdio.h>
int main()
{
	int a;//숫자 입력
	int b; //숫자 입력 
	scanf("%d %d",&a, &b);

	if((a==0 || a ==1 || a==2) && (b==0 || b==1 || b==2)){
		if(a==b+1){
			printf("승\n");
		}else{
			if(a==0 && b==2){
			printf("승\n");
			}else{
				if(a==b){
					printf("무\n");
				}else{
					printf("패\n");
				}
			}
		}
	}else{
		printf("오류\n");
	}
	return 0;
}
