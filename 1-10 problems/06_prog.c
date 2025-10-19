// 6. Write a program to swap two numbers using a third variable.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter two numbers to swap : ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The numbers after swapping are : %d %d",a,b);
    
    return 0;
}
