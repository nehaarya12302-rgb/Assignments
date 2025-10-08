#include <stdio.h>
void perimeter();
int main() {
    perimeter();
}
void perimeter() {
    int peri;
    int len;
    int wid;
    printf("Enter the values :");
    scanf("%d %d", &len, &wid);
    peri = 2 * (len + wid);
    printf("The perimeter of %d and %d is %d", len, wid, peri);
}
