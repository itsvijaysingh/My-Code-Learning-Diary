// Write a program that read some rupees and convert them into petrol in liters. (70 rupees = 1 liter)

#include <stdio.h>
void main(){
    int rupees, petrol_quantity;
    printf("Enter how many rupees you had paid for the Petrols: ");
    scanf("%d",&rupees);

    petrol_quantity=rupees/70;
    printf("In %d Rupess you had bought %d liter Petrol",rupees,petrol_quantity);
}