#include<stdio.h>
main(){
	int number;
	printf("Nhap so co 4 chu so: ");
	scanf("%d",&number);
	int sum=(number/1000)+(number/100)%10+(number/10)%10+number%10;
	int reverse=(number%10)*1000+((number/10)%10)*100+((number/100)%10)*10+number/1000;
	printf("Tong là: %d\nDao nguoc là: %d",sum,reverse);
}
