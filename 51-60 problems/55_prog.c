/* 55. Write a program to print all the prime numbers from 1 to n. */

#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i = i + 1) {
        isPrime = 1;  
        for (j = 2; j < i; j = j + 1) {
            if (i % j == 0) {
                isPrime = 0;  
                break;        
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
