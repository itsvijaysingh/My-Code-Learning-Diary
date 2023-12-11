#include <stdio.h>
void main(){
    long int num1, num2, option;

    printf("---------: Simple Calculator :----------");
    printf("\nEnter Two Numbers (Seprated By Space): ");
    scanf("%ld%ld",&num1,&num2);

    printf("\nWhat would you like to perform with these numbers: ");
    printf("\nOption 1: +\nOption 2: -\nOption 3: *\nOption 4: /\nOption 5: %");

    printf("\nEnter an Option Number:");
    scanf("%d",&option);

    switch(option){
        case 1: 
                printf("Addition of %d & %d Is: %d",num1,num2,num1+num2);
                break;
        case 2: 
                printf("Substraction of %d & %d Is: %d",num1,num2,num1-num2);
                break;
        case 3: 
                printf("Multiplication of %d & %d Is: %d",num1,num2,num1*num2);
                break;
        case 4: 
                printf("Division of %d & %d Is: %d",num1,num2,num1/num2);
                break;
        case 5: 
                printf("Modulas of %d & %d Is: %d",num1,num2,num1%num2);
                break;
        default: 
                printf("Choose Correct Option Provided Above!");
                break;
    }

}