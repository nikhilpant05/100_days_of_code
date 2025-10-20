// 17. Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c,discriminant, root1, root2;
    printf("Enter coefficients : ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %d, %d\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %d\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
