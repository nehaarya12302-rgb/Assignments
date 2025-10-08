#include <stdio.h>
void swap();
int main() {
    swap();
}
void swap() {
    int a,b,temp;
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap a=%d b=%d",a,b);
}
