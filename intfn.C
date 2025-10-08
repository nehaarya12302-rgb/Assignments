#include <stdio.h>
void add();
int main() {
    add();
}
void add() {
    int a,b,sum;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("Sum is %d",sum);
}
