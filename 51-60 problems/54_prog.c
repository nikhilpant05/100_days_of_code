/* 54. Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j, space, rows = 7, mid = (rows + 1) / 2;
    for (i = 1; i <= mid; i = i + 1) {
        for (space = 1; space <= mid - i; space = space + 1) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j = j + 1) {
            printf("*");
        }
        printf("\n");
    }
    for (i = mid - 1; i >= 1; i = i - 1) {
        for (space = 1; space <= mid - i; space = space + 1) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j = j + 1) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
