// w a p that read two numbers and print greater of them.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers(Seprated by space): ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        printf("%d Is Greater",num1);
    }else{
        printf("%d Is Greater",num2);
    }
}