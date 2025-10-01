// 69. Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;
    scanf("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);
    }
    largest = secondLargest;
    for (i = 0; i < n; i = i + 1) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("%d\n", secondLargest);
    return 0;
}
