#include <stdio.h>
int main(){
	float radius = 4;
	const float PI = 3.14;
	// chu vi:
	float perimeter = 2 * PI * radius;
	// dien tich:
	float acreage = PI * radius * radius;
	printf("chu vi hinh tron là %f\ndien tich hinh tron là %f",perimeter, acreage);
}
