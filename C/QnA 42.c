//  Write a program that read some rupees and convert them into diesel and petrol in liters separately.
#include <stdio.h>
void main(){
    int rupees, diesel, petrol;
    printf("Enter how many rupees you had paid for the Petrol/Diesel: ");
    scanf("%d",&rupees);

    diesel=rupees/45;
    petrol=rupees/70;

    printf("In %d Rupess you can buy %d Liter Diesel or %d Liter Petrol",rupees,diesel,petrol);
}