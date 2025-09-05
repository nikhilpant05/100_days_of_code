// 27. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

void main() {
    int n, sum = 0;
    int i;
    printf("Enter number of odd numbers : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  
    }

    printf("%d\n", sum);
}
