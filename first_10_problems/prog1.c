// 1.Write a program to input two numbers and display their sum.

#include<stdio.h>

int main(){

    int a,b,sum;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("The sum of the two numbers is : %d",sum);

    return 0;

}