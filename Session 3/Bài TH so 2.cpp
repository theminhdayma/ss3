#include <stdio.h>
main(){
	float length, winth;
	printf("Nhap chieu dai v� chieu rong: ");
	scanf("%f %f",&length,&winth);
	float area=length*winth;
	float perimeter=(length+winth)*2;
	printf("Dien t�ch la: %f\nChu vi l�: %f",area,perimeter);
}
