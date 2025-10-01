// 51. Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;
    for (i = 1; i <= rows; i = i + 1) {
        for (space = 1; space <= rows - i; space = space + 1) {
            printf(" ");
        }
        for (j = rows - i + 1; j <= rows; j = j + 1) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
