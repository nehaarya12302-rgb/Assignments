#include <stdio.h>
void temp();
int main() {
    temp();
}
void temp() {
    float C,F;
    printf("Enter Celsius: ");
    scanf("%f",&C);
    F = C * 9.0/5 + 32;
    printf("Fahrenheit is %.2f",F);
}
