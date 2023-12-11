#include <stdio.h>
void main(){
    long int num1, num2, option;

    printf("---------: Simple Calculator :----------");
    printf("\nEnter Two Numbers (Seprated By Space): ");
    scanf("%ld%ld",&num1,&num2);

    printf("\nWhat would you like to perform with these numbers: ");
    printf("\nOption 1: +\nOption 2: -\nOption 3: *\nOption 4: /\nOption 5: %");

    printf("\nChoose an Option Number)");
    scanf("%d",&option);

    if(option>0&&option<=5){
        if(option=1){
            printf("Addition of %d & %d Is: %d",num1,num2,num1+num2);
        }else if(option=2){
            printf("Substraction of %d & %d Is: %d",num1,num2,num1-num2);
        }else if(option=3){
            printf("Multiplication of %d & %d Is: %d",num1,num2,num1*num2);
        }else if(option=4){
            printf("Division of %d & %d Is: %d",num1,num2,num1/num2);
        }else{
            printf("Modulas of %d & %d Is: %d",num1,num2,num1%num2);
        }
    }else{
         printf("Chooese Correct Option Provided Above!");
    }

}