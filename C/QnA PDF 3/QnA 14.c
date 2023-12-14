// w a p that read three numbers and check maximum out of them using if else.

#include<stdio.h>
void main(){
    int num1, num2, num3;
    printf("Enter three numbers (seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3){
        printf("First Number(%d) Is Max!",num1);
    }else{
        if(num2>num1&&num2>num3){
            printf("Second Number(%d) Is Max!",num2);
        }else{
            printf("Third Number(%d) Is Max!",num3);
        }
    }
}