#include <stdio.h>
int main(){
	int sub1, sub2, sub3, sub4, sub5;  
	int total;
	float percentage;
	
	printf("Enter values :");
	scanf("%d %d %d %d %dd", &sub1, &sub2, &sub3, &sub4, &sub5);
	
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = (total / 500.0) * 100; 
	
	printf("Total of subjects %d %d %d %d %d is %d\n", sub1, sub2, sub3, sub4, sub5, total);
	printf("Percentage = %.2f", percentage);
	return 0;
	
}