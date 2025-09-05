// 26. Write a program to print numbers from 1 to n.

#include <stdio.h>

void main() {
    int n, i;
    printf("Enter numbers you want to print : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
