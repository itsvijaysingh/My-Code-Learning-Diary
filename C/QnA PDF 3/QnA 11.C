// w a p that read two numbers and if first number is greater than 100 and second number is
// greater than 200 then print your name otherwise print computer.

#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter two numbers (Seprated by Space): ");
    scanf("%d %d",&num1,&num2);

    if(num1>100&&num2>200){
        printf("Vijay");
    }else{
        printf("Computer");
    }
}