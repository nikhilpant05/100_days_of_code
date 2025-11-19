// 27. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

void main() {
    int n, i, sum = 0;
    printf("Enter number of odd numbers : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);  
    }

    printf("%d\n", sum);
}