// 30. Write a program to reverse a given number
#include <stdio.h>

void main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;         
        reversed = reversed * 10 + remainder;  
        n = n / 10;                 
    }
    printf("Reversed number is: %d\n", reversed);
}
