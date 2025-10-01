#include <stdio.h>
int main() {
int n = 145, temp = 145, sum = 0, r, f, i;
while(temp > 0) {
r = temp % 10;
f = 1; i = 1;
	while(i <= r) f = f * i, i++;
	sum = sum + f;
	temp = temp / 10;
}
if(sum == n)
	printf("Strong");
else
	printf("Not Strong");
}
