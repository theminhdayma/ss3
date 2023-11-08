#include <stdio.h>
main(){
	float length, winth;
	printf("Nhap chieu dai và chieu rong: ");
	scanf("%f %f",&length,&winth);
	float area=length*winth;
	float perimeter=(length+winth)*2;
	printf("Dien tích la: %f\nChu vi là: %f",area,perimeter);
}
