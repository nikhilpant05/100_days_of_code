/* 52. Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 1; i = i + 1) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 3; i = i + 1) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i = i + 1) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 3; i = i + 1) {
        printf("*\n");
    }
    printf("\n");
    for (i = 1; i <= 1; i = i + 1) {
        printf("*\n");
    }

    return 0;
}
