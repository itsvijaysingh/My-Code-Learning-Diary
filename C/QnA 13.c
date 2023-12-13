//Write a program that read some rupees and convert them into dollars (70 rupees = 1 dollar).

#include <stdio.h>
void main(){
    int rupees, dollar;
    printf("------------: Rupees (₹) to Dollar  ($)  Converter  :----------\n");
    printf("Enter Currency in INR (₹): ");
    scanf("%d",&rupees);

    printf("%d₹ in $ Is: %d$",rupees,rupees/70);
}