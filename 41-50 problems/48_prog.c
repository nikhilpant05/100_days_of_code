// 48. Write a program to print the following pattern:
//1
//12
//123
//1234
//12345

#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    for (i = 1; i <= rows; i = i + 1) {
        for (j = 1; j <= i; j = j + 1) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
