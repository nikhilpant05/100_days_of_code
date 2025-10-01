// 56. Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[100];  
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    printf("You entered:\n");
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
