#include <stdio.h>
void pali();
int main() {
    pali();
}

void pali() {
    int a = 12302;

    if ((a % 10 == a / 100))
        printf("palindrome");
    else
        printf("not palindrome");
}


