// 3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){
    int l=10;
    int b=20;
    int perimeter,area;

    perimeter=2*(l+b);
    printf("\nThe perimeter of the rectangle is : %d",perimeter);

    area=l*b;
    printf("\nThe area of the rectangle is : %d",area);

    return 0;
}