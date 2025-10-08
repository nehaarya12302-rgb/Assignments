#include <stdio.h>
void year();
int main() {
    year();
}

void year() {
	int year = 2024;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
