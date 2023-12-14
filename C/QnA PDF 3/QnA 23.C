// w a p that read three numbers and if first number is greater than second number and second
// number is less than third number then print sum of first two numbers otherwise print multiply
// of last two numbers using logical and operator.


#include<stdio.h>
void main(){
   int num1, num2, num3;
    printf("Enter three numbers(Seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2&&num2<num3){
        printf("Sum of first two numbers: %d",num1+num2);
    }else{
        printf("Multiply of last two numbers: %d",num2*num3);
    }
}