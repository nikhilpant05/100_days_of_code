// 44. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0; 
    int numerator, denominator;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        if (i == 1) {
            sum = sum + 1.0;  
        } else {
            numerator = 2 * i - 1;
            denominator = 2 * i;
            sum = sum + (float)numerator / denominator;
        }
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}


