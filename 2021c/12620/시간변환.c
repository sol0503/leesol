#include <stdio.h>

int main() {
	int second; //초단위 입력
	int hour; //시간 
	int h; //시
	int m; //분
	int s; //초
    
	scanf("%d", &second);

	hour = second / (60*60);
	m = second /60 %60;
	s = second % 60;
	h = hour % 12;

	
	if(hour>=12){ 
		printf("오후");
		printf("%d시%d분%d초\n",h,m,s);
                 }else{
	    printf("오전");
		printf("%d시%d분%d초\n",hour,m,s);
}
	return 0;
}
