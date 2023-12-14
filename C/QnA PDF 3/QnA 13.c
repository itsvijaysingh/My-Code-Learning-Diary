// w a p that read four numbers and if first number is less than last number then print sum of first
// three numbers otherwise print multiply of last three numbers using conditional operator.

#include<stdio.h>
void main(){
    int num1, num2, num3, num4;
    printf("Enter four numbers(Seprated by Space): ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    if(num1<num4&&){
        printf("Sum of first three nums: %d",num1+num2+num3);
    }else{
        printf("Multiply of last three numbers: %d",num2*num3*num4);
    }

}