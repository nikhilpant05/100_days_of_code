// 70. Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k (number of rotations): ");
    scanf("%d", &k);
    k = k % n;   
    for (j = 0; j < k; j++) {
        int last = arr[n - 1];           
        for (i = n - 1; i > 0; i--) {    
            arr[i] = arr[i - 1];
        }
        arr[0] = last;                   
    }
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

