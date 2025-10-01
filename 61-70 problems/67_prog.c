// 67. Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &key);
    for (i = n; i >= pos; i = i - 1) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = key;
    n = n + 1;
    printf("Updated array:\n");
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
