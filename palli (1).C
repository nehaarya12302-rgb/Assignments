#include <stdio.h>
int main() {
    int a = 12302;

    if ((a % 10 == a / 100))
        printf("palindrome");
    else
        printf("not palindrome");
}
