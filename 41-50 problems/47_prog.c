// 47. Write a program to print the following pattern:
// *
// ** 
// ***
// ****
// *****

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i = i + 1) {
        for (j = 1; j <= i; j = j + 1) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
