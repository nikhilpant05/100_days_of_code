// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main(){

    int a,b,sum,difference,product,quotient;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    sum=a+b;
    printf("The sum of the numbers is : %d",sum);

    difference=a-b;
    printf("\nThe difference of the numbers is : %d",difference);

    product=a*b;
    printf("\nThe product of the numbers is : %d",product);

    quotient=a/b;
    printf("\nThe quotient of the numbers is : %d",quotient);

    return 0;
    
}