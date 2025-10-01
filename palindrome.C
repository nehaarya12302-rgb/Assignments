#include <stdio.h>
int main() {
int a = 121;

if ((a % 10 == a / 100))
    printf("palindrome");
else
    printf("not palindrome");
}
