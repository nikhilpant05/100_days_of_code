// 40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n, d, r = 0, p = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        d = n % 10;
        if (d == 0) {
            r = r + (1 * p);
        } else if (d == 1) {
            r = r + (0 * p);
        } else {
            printf("Invalid binary digit!\n");
            return 1;
        }
        n = n / 10;
        p = p * 10;
    }

    printf("1's complement: %d\n", r);
    return 0;
}
