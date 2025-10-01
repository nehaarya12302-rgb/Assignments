#include <stdio.h>

int main() {
int a = 10, b = 5, c = 10;

if(a == b && b == c)
printf("Equilateral");

else if(a == b || b == c || a == c)
printf("Isosceles");

else
printf("Scalene");

}