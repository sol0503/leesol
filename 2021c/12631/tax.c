#include <stdio.h>
int main()
{  
	
	//명사들에 대한 분석
      //과세 대상 소득 = 총수입 - 공제액
	  //세액(세금 액수) = 과세 대상 소득 * 세율(누진세)

	//필요한 변수(총수입,부양 가족 수, 신용카드 사용액,의료비 지출금, 기부금등) 를 선언한다.
	
	
	 int total_income; // 총수입
	 int tax; //세금액수(누진세)
	 int taxable_income; //과세 대상 소득

	int the_number_of_family; //부양 가족수
	int card_usage_amount; //신용카드 사용액
	int medical_expenses; //의료비 지출금
	int donation; //기부금


	int deducted_amount; //총 공제액금

	int deducted_amount_family; // 가족공제액
	int deducted_amount_card; //신용카드 공제액
	int deducted_amount_medical; //의료비 공제액
	int deducted_amount_donation; //기부금 공제액





	
	//데이터를 입력받는다.
	scanf("%d %d %d %d %d" ,&total_income, &the_number_of_family, &card_usage_amount, &medical_expenses, &donation);

	
	
	
	//공제액을 계산한다.
	 //가족 공제
	deducted_amount_family = (100 +  the_number_of_family * 100)*10000;

	 //신용카드 공제
	if (card_usage_amount > 1000){
		deducted_amount_card = ((card_usage_amount - 1000) *0.1)*10000;
	}else{
		deducted_amount_card = 0;
	}

	 //의료비 공제
	 if (medical_expenses > total_income * 0.05){
		deducted_amount_medical = (medical_expenses)*10000;
	 }else{ 
		deducted_amount_medical = 0;
	 }

	 //기부금 공제
		deducted_amount_donation = donation*10000; 

	 //공제액 총액 계산
	 deducted_amount = deducted_amount_family + deducted_amount_card +deducted_amount_medical +deducted_amount_donation;
	
	 
	 taxable_income = total_income*10000 - deducted_amount;

	 if(taxable_income<0 ){
	 		taxable_income=0;
	 }else{
		
	 taxable_income = taxable_income;
	 }
	 
	
	//확인 출력
	
	// printf("가족 공제는 %d원입니다.\n신용카는 공제는 %d원입니다.\n의료비 공제는 %d원입니다.\n기부금 공제는 %d원입니다.\n총공제액은 %d원입니다.\n총 과세 소득액은 %d원입니다.\n", deducted_amount_family, deducted_amount_card, deducted_amount_medical, deducted_amount_donation, deducted_amount, taxable_income); 

	// printf("과세 대상소득액은 %d 입니다.\n", taxable_income);
	
	//누진세 계산
	
	 if(taxable_income<=10000000){
		tax = taxable_income * 0.01;
	 }else{
			if (taxable_income<=20000000){
		tax = 100000 + (taxable_income -10000000) * 0.03; 
			}else{
				if (taxable_income<=30000000 ){
					tax = 100000 + 300000 + (taxable_income - 20000000) *0.1; 
				}else{
					tax = 100000 + 300000 + 1000000 + (taxable_income - 30000000) *0.2;
				}

			}
	 }
    

	//결과 출력
	
	 printf("세액(누진세)는 %d원입니다.\n",tax);
	
	//입력은 만원단위 저장,계산,출력은 원단위를 고려하여 버전 2에서 3으로갈때 *10000을 각각 추가 하였습니다.
	// 제출 3버전에서 testplan.txt를 taxplan.txt로 제출하여 제출을 다시하여 버전이 하나더 생겼습니다. 버전 3은 무시해주시고 버전 4가 버전 3 버전 5 가 버전 4 버전 6이 버전 5 버전 7이 6으로 봐주세요 죄송합니다.
	
	/*비교 테스트 실행해본 결과 결과가 옳지 않고 빠진 것이 있어 아래와 같이 수정하였습니다.
	// testplan.txt 금액이 잘못되어 버전5( 원래의 버전 4)부터 수정하였습니다.
	// 공제액 > 소득액이면 과세대상 소득 = 0 이라는 조건을 추가시키지 않아 버전 5(원래의 버전 4)에 추가하였습니다.
	*/
	return 0;
}
