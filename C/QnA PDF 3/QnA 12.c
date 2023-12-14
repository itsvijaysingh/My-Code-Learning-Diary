// w a p that read three numbers and if first number is greater than second number and if second
// number is less than third number then print then print sum of first two numbers otherwise print
// multiply of last two numbers.

#include<stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter three numbers (seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2&&num2<num3){
        printf("Sum of first two numbers = %d",num1+num2);
    }else{
        printf("Multiply of Last Two Numbers = %d",num2*num3);
    }
}