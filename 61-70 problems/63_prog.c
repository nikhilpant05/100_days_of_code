// 63. Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[100], arr2[100];
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i = i + 1) scanf("%d", &arr1[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i = i + 1) scanf("%d", &arr2[i]);
    printf("Merged array:\n");
    for (i = 0; i < n1; i = i + 1) printf("%d ", arr1[i]);
    for (i = 0; i < n2; i = i + 1) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}

