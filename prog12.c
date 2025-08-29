// 12. Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    if(a>=0){
        if(a==0){
            printf("The integer is Zero");
        }
        else{
            printf("The integer is Positive");
        }
    }
    else{
        printf("The integer is Negative");
    }    
    
}