#include <stdio.h>
int main()
{
	//가위:0, 바위:1 보:2로 표시
	//둘의 손을 표시할 변수를 선언하자.
	int myhand; //나의손
	int yourhand; //상대방의손

	//입력을 받는다.
	printf("두 사람의 손을입력하세요 : (0,1,2는 각기 가위 바위 보)");
	scanf("%d %d",&myhand, &yourhand);
	if (myhand >2 || yourhand >2 ||myhand <0 ||yourhand<0){
		printf("오류\n");
	}else{
		if(myhand ==yourhand ){
			printf("무승부");
		}else{
			//이기거나 진 경우 
			//int winingHand =myhand +1;
			//if (winingHand ==3) winingHand =0;
			int winingHand = (myhand+1)%3;

			if (yourhand == winingHand){
				printf("패\n");
			}else{
				printf("승\n");
			}
		}
	}

}
