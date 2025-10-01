#include <stdio.h>
int main(){
	float area;
	float base;
	float height;
	
	printf("Enter Values :");
	scanf("%f %f",&base, &height);
	
	area = 0.5 * base * height;
	
	printf("The area of %.2f and %.2f is %.2f",base, height, area);
	return 0;
	
}
