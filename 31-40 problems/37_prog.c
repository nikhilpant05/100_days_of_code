// 37. Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a; 
    y = b;

    while (b != 0) {
        int x1 = b;
        b = a % b;
        a = x1;
    }

    printf("LCM = %d", (x * y) / a);
    return 0;
}
