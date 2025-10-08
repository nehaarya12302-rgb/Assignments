#include <stdio.h>
void marks();
int main() {
    marks();
}
void marks() {
    int a,b,c,d,e,total;
    float per;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    per = total/5.0;
    printf("Total = %d\n",total);
    printf("Percentage = %.2f",per);
}
