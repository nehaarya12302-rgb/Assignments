#include <stdio.h>
void avg();
int main() {
    avg();
}
void avg() {
    int a, b, c, d, e;
    float avg;
    printf("Enter 5 values: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5.0;
    printf("The avg of these values is %.2f", avg);
}
