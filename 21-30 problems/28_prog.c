// 28. Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

void main() {
    int n, i;
    int product = 1;
    printf("Enter numbers : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);
}
