// 5. Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>

int main(){
    float celcius,farenheit;
    printf("Enter temperature in celcius : ");
    scanf("%f",&celcius);

    farenheit=((9.0/5.0)*celcius)+32;
    printf("The temperature in farenheit is : %0.2f",farenheit);

    return 0;

}
