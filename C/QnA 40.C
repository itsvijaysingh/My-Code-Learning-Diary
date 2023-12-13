//  Write a program that read some rupees and convert them into diesel in liters. (45 rupees = 1 liter)
#include <stdio.h>
void main(){
    int rupees, diesel;
    printf("Enter how many rupees you had paid for the Diesel: ");
    scanf("%d",&rupees);

    diesel=rupees/45;
    printf("In %d Rupess you had bought %d liter Diesel",rupees,diesel);
}