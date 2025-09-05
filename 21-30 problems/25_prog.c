// 25. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

void main() {
    int a, b, result;
    char op;
    printf("Enter what you want to calculate: ");
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("%d\n", result);
            break;
        case '/':
            result = a / b;
            printf("%d\n", result);
            break;
        case '%':
            result = a % b;
            printf("%d\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }
}

