#include <stdio.h>
int main() {
int n = 28, s = 0, i;
for (i = 1; i < n; i++)
if (n % i == 0)
    s = s + i;
if (s == n)
printf("Perfect");
else
printf("Not Perfect");
}
