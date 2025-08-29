// 6. Write a program to swap two numbers using a third variable.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter two numbers to swap : ");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    printf("The numbers after swapping are : %d %d",c,b);
    
    return 0;
}
