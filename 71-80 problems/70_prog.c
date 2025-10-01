// 70. Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    scanf("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % n;  
    for (i = n - k; i < n; i = i + 1) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - k; i = i + 1) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

