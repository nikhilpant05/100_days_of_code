// 68. Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for (i = 0; i < n; i = i + 1) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        for (i = pos; i < n - 1; i = i + 1) {
            arr[i] = arr[i + 1];
        }
        n = n - 1;
    }
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
