// w a p that read two numbers and if second number is less than first number then print double of 
// first number otherwise print square of second number.


#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter two numbers (Seprated by Space): ");
    scanf("%d %d",&num1,&num2);

    if(num2<num1){
        printf("%d's Double Is: %d",num1,num1+num1);
    }else{
        printf("%d's Square Is: %d",num2,num*2);
    }
}