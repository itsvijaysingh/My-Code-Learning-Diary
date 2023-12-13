//Write a program that read some dollars and convert them into rupees (1 dollar = 70 rupees).
#include <stdio.h>
void main(){
    int dollar, rupees;
    printf("------------: Dollar ($) to Rupees Converter (₹) :----------\n");
    printf("Enter Currency in Dollar ($): ");
    scanf("%d",&dollar);

    printf("%d in INR Is: %d",dollar,dollar*70);
}