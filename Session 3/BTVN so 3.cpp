#include <stdio.h>
main(){
	float math_score, literature_score, english_score;
	printf("Nhap diem math_score, literature_score, english_score : ");
	scanf("%f %f %f",&math_score,&literature_score,&english_score);
	float sum = math_score+literature_score+english_score;
	float medium = (math_score+literature_score+english_score)/3;
	printf("Diem tong l�: %2f\nDiem trung binh l�: %2f",sum,medium);
}
