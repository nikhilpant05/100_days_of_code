// 66. Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &key);
    while (pos < n && arr[pos] < key) {
        pos = pos + 1;
    }
    for (i = n; i > pos; i = i - 1) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n = n + 1;
    printf("Updated array:\n");
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
