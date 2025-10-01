// 60. Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int positive = 0, negative = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positive = positive + 1;
        } else if (arr[i] < 0) {
            negative = negative + 1;
        } else {
            zero = zero + 1;
        }
    }
    printf("Positive numbers count: %d\n", positive);
    printf("Negative numbers count: %d\n", negative);
    printf("Zero count: %d\n", zero);
    return 0;
}
