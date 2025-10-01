#include <stdio.h>
int main() {
    int a=50, b=2, c=7;
    if(a>b && a>c)
        printf("a is greater");
    else if(b>c)
        printf("b is greater");
    else
        printf("c is greater");
}
