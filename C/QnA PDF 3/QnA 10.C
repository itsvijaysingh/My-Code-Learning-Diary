// w a p that read a number and if the number is greater than 10 and if the number is greater than
// 20 then print square of first number.

#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>10&&num>20){
        printf("Sqare of Num = %d",num*2);
    }else{
        printf("Not greater then 10 & 20!");
    }      
}