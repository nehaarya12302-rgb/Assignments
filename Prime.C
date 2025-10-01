#include <stdio.h>
int main(){
int n = 13, i =2, self = 0;
while(i < n){
	if(n % i == 0)
	self = 1;
	i++;
}
if(self == 0)
	printf("Prime");
else
	printf("Not a prime");
}
