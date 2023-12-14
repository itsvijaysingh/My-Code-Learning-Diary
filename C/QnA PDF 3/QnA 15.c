// w a p that read three numbers and check maximum out of them using conditional operator.

#include<stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter three numbers (seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    num1>num2&&num1>num3 ? printf("%d Is Max",num1) : num2>num1&&num2>num3 ? printf("%d Is Max",num2) : printf("%d Is Max",num3); 
}