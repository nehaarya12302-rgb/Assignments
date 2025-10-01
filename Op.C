#include <stdio.h>

int main() {
int a = 10, b = 10;
char op = '+';

if(op == '+')
printf("Addition = %d", a + b);

else if(op == '-')
printf("Subtraction = %d", a - b);

else if(op == '*')
printf("Multiplication = %d", a * b);

else if(op == '/')
printf("Division = %d", a / b);

else if(op == '%')
printf("Modulus = %d", a % b);

else
printf("Invalid Operator");
}
