#include <stdio.h>
main(){
	float math_score, literature_score, english_score;
	printf("Nhap diem math_score, literature_score, english_score : ");
	scanf("%f %f %f",&math_score,&literature_score,&english_score);
	float sum = math_score+literature_score+english_score;
	float medium = (math_score+literature_score+english_score)/3;
	printf("Diem tong là: %2f\nDiem trung binh là: %2f",sum,medium);
}
