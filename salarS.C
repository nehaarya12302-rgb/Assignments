#include <stdio.h>

int main() {
    float basic, da, ta, hra, total;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;
    printf("Basic: %.2f  DA: %.2f  TA: %.2f  HRA: %.2f  Total: %.2f\n", basic, da, ta, hra, total);

    return 0;
}
