// 22. Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

void main() {
    int cp, sp;
    int percentage;
    printf("Enter Cost price and Selling Price : ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        percentage = ((sp - cp) * 100) / cp;
        printf("Profit %d%%\n", percentage);
    } 
    else if (cp > sp) {
        percentage = ((cp - sp) * 100) / cp;
        printf("Loss %d%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }
}




