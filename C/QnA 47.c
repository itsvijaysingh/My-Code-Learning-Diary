// Write a program that read principal amount, interest rate and time and calculate simple interest (si=(p*r*t)/100).

#include <stdio.h>
void main(){
    int principal, interest, time, simple;
    printf("Simple Interest Calculator: \n");

    printf("Enter Principal Amount: ");
    scanf("%d",&principal);

    printf("Enter Interest Rate: ");
    scanf("%d",&interest);

    printf("Enter Time: ");
    scanf("%d",&time);

    simple=(principal*interest*time)/100;

    printf("Simple Interest IS = %d",simple);

}