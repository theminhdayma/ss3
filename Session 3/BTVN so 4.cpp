#include <stdio.h>
int main(){
	int number1, number2, number3;
	printf("nhap 3 so bat ki: ");
	scanf("%d %d %d",&number1,&number2,&number3);
	int max = number1, min = number1;
	max=(max < number2)?number2 : max;
	max=(max < number3)?number3 : max;
	min=(min > number2)?number2 : min;
	min=(min > number3)?number3 : min;
	printf("max = %d\nmin = %d",max,min);
}
