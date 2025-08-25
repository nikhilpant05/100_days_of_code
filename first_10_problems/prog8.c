//  8. Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter first n natural numbers : ");
    scanf("%d",&n);
    while (i<=n){
        sum+=i;
        i++;
    }

    printf("The sum of first %d natural numbers is : %d",n,sum);

    return 0;
        
    
}