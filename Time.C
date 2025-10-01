#include <stdio.h>
int main(){
	int minutes = 224;
	int hours;
	
	hours = minutes / 60;
	minutes = minutes % 60;
	
	printf("Time %d hours and %d minutes", hours, minutes);
}