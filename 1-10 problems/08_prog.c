//  8. Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter first n natural numbers : ");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("The sum of first %d natural numbers is : %d",n,sum);

    return 0;
        
}