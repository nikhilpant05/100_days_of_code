// 65. Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found == 1) {
        printf("Element %d found at position %d.\n", key, mid + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
