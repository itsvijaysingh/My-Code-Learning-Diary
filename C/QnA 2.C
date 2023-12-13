// Write a program that swaping two numbers without third variable.

#include <stdio.h>
void main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After swaping First Num is %d and Second Num is %d.",num1,num2);

}