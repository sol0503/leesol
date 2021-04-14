#include <stdio.h>

int main () {
	int distance; //거리 (km던위)
	int minutes; // 시간 (분단위)
	int numPerson; //사람수

	int fare_distance; // 거리 요금
	int fare_time; // 시간에 따른 요금
    int fare_person; //사람에 따른 요금

	int total_fare; //총요금
	
	scanf("%d %d %d", &distance, &minutes ,&numPerson);
	fare_distance = 400 *distance; 
	fare_time = minutes / 10 * 500;
	fare_person =(numPerson -1) * fare_distance *0.05;
	total_fare = fare_distance + fare_time + fare_person +2000;

  	printf("%d 입니다.\n", total_fare);

	return 0;
}
