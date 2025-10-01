// 59. Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i = i + 1) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount = evenCount + 1;
        } else {
            oddCount = oddCount + 1;
        }
    }
    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);
    return 0;
}
