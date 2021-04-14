#include <stdio.h>
int main(){
	int distance;
	int minutes;
	int numPerson;

	int fare_distance;
	int fare_time;
	int fare_person;

	int total_fare;

	scanf("%d %d %d", &distance, &minutes, &numPerson);
	
	if(distance<=10){ 
		fare_distance = 500;
	}
	else{ 
	fare_distance = 500+(distance-10)*400; 
}
    if(minutes<=60){
		fare_time = (1+(minutes/10))*1000;
	}
	else{
	   	fare_time = 6000+((minutes-60)/10+1)*800;
	}
   fare_person = (numPerson -1)*fare_distance*0.05;

   total_fare = fare_distance + fare_time + fare_person +2000;
   printf("거리요금은  %d, 시간요금은 %d, 승객수요금은 %d, 총요금은 %d 입니다.\n", fare_distance, fare_time, fare_person, total_fare);

   return 0;
}
