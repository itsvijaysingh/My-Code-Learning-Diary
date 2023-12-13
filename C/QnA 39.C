// Write a program that read some liters of petrol and convert them into rupees. (1 liter = 70 rupees)

#include <stdio.h>
void main(){
    int petrol, rupees;
    printf("Enter how much petrol you had bought(in liter): ");
    scanf("%d",&petrol);

    rupees=petrol*70;

    printf("You had bought %d liter Petrol of %d Rupees.",petrol,rupees);
}