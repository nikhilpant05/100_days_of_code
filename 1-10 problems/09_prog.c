// 9. Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
int main(){
    float p,r,t,si,ci,x;
    printf("Enter Principal , Rate , Time : ");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    x=p;
    for(int i=1;i<=t;i++){
        x=x*(1+(r/100));
    }
    ci=x-p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f",si,ci);
    
    return 0;
}
