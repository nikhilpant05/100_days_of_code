// 33. Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, rem, sum = 0, x;
    printf("Enter number to check : ");
    scanf("%d", &n);
    x = n;

    while (x > 0) {
        rem = x % 10;
        sum = sum + rem * rem * rem;  
        x = x / 10;
    }
    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
