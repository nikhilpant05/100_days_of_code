// 45. Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 2;    
    int den = 3;    

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) {
        sum = sum + (float)num / den;

        num = num + 2;   
        den = den + 4;   
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}

