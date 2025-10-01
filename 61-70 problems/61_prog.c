// 61. Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i = i + 1) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Element %d found at position %d.\n", key, i + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
