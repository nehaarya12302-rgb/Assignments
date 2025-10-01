
#include <stdio.h>
int main() {
double price = 600, fprice, discount = 0;
char choice = 'y';

if (choice == 'y') {
if (price >= 500) {
    discount = price * 0.20;
    fprice = price - discount;
} else {
    discount = price * 0.10;
    fprice = price - discount;
}
} 
else {
if (price >= 600) {
    discount = price * 0.15;
    fprice = price - discount;
} else {
    discount = 0;
    fprice = price;
}
}

if (discount == 0)
printf("Final price = %.2lf", fprice);
else
printf("Actual price = %.2lf , Final price = %.2lf with discount %.2lf", price, fprice, discount);
}
