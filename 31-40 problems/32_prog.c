// 32. Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n,x,rev=0, rem;
    printf("Enter number to check : ");
    scanf("%d", &n);
    
    x = n;  
    while (n > 0) {
        rem = n % 10;                
        rev = rev * 10 + rem; 
        n = n / 10;                   
    }
    
    if (x == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");
    
    return 0;
}
