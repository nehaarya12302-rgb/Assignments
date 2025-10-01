#include <stdio.h>
int main(){
	int a, b, temp;
	a = 10;
	b = 15;
	
	temp = a;
	a = b;
	b = temp;
	printf("After Swaping a= %d and b = %d", a,b);
	return 0;

}