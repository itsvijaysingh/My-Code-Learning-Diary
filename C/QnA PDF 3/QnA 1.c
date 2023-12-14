// w a p that read two numbers and print their sum, minus (subtraction), multiply, division, modulus.
#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter Two Numbers(Seprated by space): ");
    scanf("%d%d",&num1,&num2);

    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d % %d = %d\n",num1,num2,num1%num2);
    
}

