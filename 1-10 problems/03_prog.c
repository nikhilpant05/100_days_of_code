// 3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){
    float l=10,b=20,perimeter,area;

    perimeter=2*(l+b);
    printf("\nThe perimeter of the rectangle is : %0.2f",perimeter);

    area=l*b;
    printf("\nThe area of the rectangle is : %0.2f",area);

    return 0;
}