#include <stdio.h>
int main(){
int n = 153, sum = 0, temp, r;
temp = n;
while(temp > 0){
	r = temp % 10;
	sum = sum + r*r*r;
	temp = temp / 10;
}
if(sum ==0)
	printf("Armstrong");
else
	printf("Not Armstrong")
}
