#include <stdio.h>
void area();
int main() {
    area();
}
void area() {
    float r = 7.0;
    float area = 3.14 * r * r;
    printf("Area of this is %.2f\n", area);
}
