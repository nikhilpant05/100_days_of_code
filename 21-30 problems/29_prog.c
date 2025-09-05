// 29. Write a program to calculate the factorial of a number.

#include <stdio.h>

void main() {
    int n, i;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }
}
