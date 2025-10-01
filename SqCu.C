#include <stdio.h>

int main(){
	int num;
	int square;
	int cube;
	
	num = 5;
	
	square = num * num;
	cube = num * num * num;
	
	printf("Square of %d is %d\n", num, square);
	printf("Cube of %d is %d\n", num, cube);
	return 0;
	
}