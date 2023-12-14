// w a p that read three numbers and print minimum out of them using if statements.


#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers(Seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1<num2&&num1<num3){
        printf("%d Is MIN",num1);
    }

    if(num2<num1&&num2<num3){
        printf("%d Is MIN",num2);
    }

    if(num3<num1&&num3<num2){
        printf("%d Is MIN",num3);
    }
    

    
}