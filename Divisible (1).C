#include <stdio.h>

int main() {
int a = 35;

if(a % 3 == 0 && a % 5 != 0)
printf("Divisible by 3 but not by 5");

else if(a % 5 == 0 && a % 3 != 0)
printf("Divisible by 5 but not by 3");

else if(a % 3 == 0 && a % 5 == 0)
printf("Divisible by both");

else
printf("Divisible by None");

}
