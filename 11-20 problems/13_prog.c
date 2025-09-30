// 13. Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

void main(){
    int y;
    printf("Enter a year : ");
    scanf("%d",&y);

    if( y % 4 == 0){
        printf("It is a Leap Year");
    }
    else{
        printf("It is not a Leap year");
    }    
}