// 57. Find the sum of array elements.

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];  
    }
    printf("Sum is: %d\n", sum);
    return 0;
}
