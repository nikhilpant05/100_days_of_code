/* 53. Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j;
    int rows = 9; 
    int mid = (rows + 1) / 2; 
    for (i = 1; i <= mid; i = i + 1) {
        for (j = 1; j <= (2 * i - 1); j = j + 1) {
            printf("*");
        }
        printf("\n");
    }
    for (i = mid - 1; i >= 1; i = i - 1) {
        for (j = 1; j <= (2 * i - 1); j = j + 1) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
