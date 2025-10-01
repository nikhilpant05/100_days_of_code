// 64. Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0}, i, maxDigit = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0) num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit] = freq[digit] + 1;
        num = num / 10;
    }
    for (i = 1; i < 10; i = i + 1) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }
    printf("Digit that occurs most: %d\n", maxDigit);
    return 0;
}
