#include <stdio.h>
int main(){
	int maxnum, a, b;
	scanf("%d%d", &a,&b);
	maxnum = (a>b)?a:b;
	//maxnum = if(a>b) a else b; //이줄은 틀렸다. 3항연산자로 바꿔쓰라.
	printf("최대값은: %d\n", maxnum);
	return 0;
}
