// 69. Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int first, second;
    first = second = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > first)
            first = arr[i];
    }
    second = -1; 
    for (i = 0; i < n; i++) {
        if (arr[i] != first) {
            if (second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }
    if (second == -1)
        printf("No second largest element (all are same)");
    else
        printf("Second largest element = %d", second);

    return 0;
}
