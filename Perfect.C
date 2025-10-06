#include <stdio.h>
int main(void){
int n = 28, sum = 0, i = 1;
while(i < n){
	if(n % i == 0)
	sum = sum + i;
	i++;
}
if(sum ==n)
	printf("Perfect");
else
	printf("Not Perfect");
}