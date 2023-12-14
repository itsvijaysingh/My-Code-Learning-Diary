// w a p that read two numbers and if they are equal then print same otherwise print not same.

#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter two Numbers: ");
    scanf("%d %d",&num1,&num2);

    if(num1==num2){
        printf("Same!");
    }else{
        printf("Not Same!");
    }
}