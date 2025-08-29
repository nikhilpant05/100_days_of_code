// 4. Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>

int main(){
    float r=10,circumference,area;
    
    circumference=2*3.14*r;
    printf("\nThe circumference of the circle is : %0.2f",circumference);

    area=3.14*r*r;
    printf("\nThe area of the circle is : %0.2f",area);

    return 0;
}