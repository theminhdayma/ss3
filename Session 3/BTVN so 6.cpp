#include<stdio.h>
int main(){
	int my_year_of_birth, year=2023;
	printf("Nhap nam sinh: ");
	scanf("%d",&my_year_of_birth);
	int age=year-my_year_of_birth;
	printf("Tuoi cua toi: %d\n",age);
	(age%2 == 0)?printf("chan or le: %s\n","chan") : printf("chan or le: %s\n","le");
}
