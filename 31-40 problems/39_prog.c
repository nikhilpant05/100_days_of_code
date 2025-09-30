// 39. Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, d, p = 1, x = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        if (d % 2 == 1) {
            p = p*d;
            x = 1;
        }
        n = n/10;
    }
    if (x)
        printf("%d\n", p);
    else
        printf("No odd digits\n");

    return 0;
}
