// Write a program that read some liters of diesel and convert them into rupees. (1 liter = 45 rupees)

#include <stdio.h>
void main(){
    int diesel, rupees;
    printf("Enter how much diesel you had bought(in liter): ");
    scanf("%d",&diesel);

    rupees=diesel*45;

    printf("You had bought %d liter diesel of %d Rupees.",diesel,rupees);
}