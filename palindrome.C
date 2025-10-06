#include <stdio.h>

int main() {
int n = 121;
int temp = n, rev = 0, r;


while(temp > 0) {
    r = temp % 10;
    rev = rev * 10 + r;
    temp = temp / 10;
}

if(rev == n)
    printf("Palindrome");
else
    printf("Not Palindrome");
}
