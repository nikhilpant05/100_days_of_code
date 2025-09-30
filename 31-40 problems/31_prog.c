// 31. Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, bin = 0, x = 1, rem;
    printf("Enter number for input : ");
    scanf("%d", &n);
    
    while (n > 0) {
        rem = n % 2;          
        bin = bin + rem * x;  
        n = n / 2;            
        x = x * 10;   
    }    
    printf("%d", bin);
    return 0;
}
