#include <stdio.h>
int main(){
	int peri;
	int len;
	int wid;

	printf("Enter the values :");
	scanf("%d %d", &len, & wid);
	peri = 2 * (len + wid);
	
	printf("The perimeter of %d and %d is %d",len, wid, peri);
	return 0;
	
}