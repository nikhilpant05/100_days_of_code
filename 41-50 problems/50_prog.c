// 50. Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *
#include <stdio.h>
int main() {
    int i = 1, j;
    int rows = 5;
    while (i <= rows) {
        j = 1;
        while (j < i) {
            printf(" ");
            j = j + 1;
        }
        j = 1;
        while (j <= rows - i + 1) {
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}
