#include <stdio.h>
void triangle();
int main() {
    triangle();
}
void triangle() {
    float b,h,area;
    printf("Enter b and h: ");
    scanf("%f %f",&b,&h);
    area = 0.5 * b * h;
    printf("Area is %.2f",area);
}

