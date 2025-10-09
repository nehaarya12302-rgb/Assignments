#include <stdio.h>

// function declarations
void sum();
void areaCircle();
void Temp();
void average;
void squareCube();
void triangleArea();
void checkTriangleType();
void rectanglePerimeter();
void triangleArea();
void sum();
void squareCube();

// function call
int main() {
    sumAB();
    areaCircle();
    cToF();
    averageOfFive();
    squareCube();
    triangleArea();
    checkTriangleType();
    rectanglePerimeter();
    triangleArea2();
    sumAB2();
    squareCube2();
    return 0;
}
// main ends here!!

// function definition
void sum() {
    int sum, a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);    
    sum = a + b;
    printf("Sum = %d\n", sum);
}

void areaCircle() {
    float r, area;
    r = 7.0;
    area = 3.14 * r * r;
    printf("Area of circle = %.2f\n", area);
}

void Temp() {
    float C, F;
    C = 25;
    F = C * 9.0 / 5 + 32;
    printf("Fahrenheit = %.2f\n", F);
}

void average() {
    int a, b, c, d, e;
    float avg;
    printf("Enter 5 values: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5.0;
    printf("Average = %.2f\n", avg);
}

void squareCube() {
    int num = 5;
    int square = num * num;
    int cube = num * num * num;
    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);
}

void triangleArea() {
    float base, height, area;
    printf("Enter values for base and height: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", area);
}

void checkTriangleType() {
    int a = 10, b = 5, c = 10;
    if(a == b && b == c)
        printf("Equilateral\n");
    else if(a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");
}

void rectanglePerimeter() {
    int len, wid, peri;
    printf("Enter length and width: ");
    scanf("%d %d", &len, &wid);
    peri = 2 * (len + wid);
    printf("Perimeter = %d\n", peri);
}

// Additional programs
void triangleArea() {
    float base, height, area;
    printf("Enter another base and height for triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area = %.2f\n", area);
}

void sum() {
    int a, b, sum;
    printf("Enter two more numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}

void squareCube() {
    int num = 7;
    int square = num * num;
    int cube = num * num * num;
    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);
}
//ends here!!