// W a p that read a two digits number and print its sum of digits.


#include<stdio.h>
void main(){
    int num, d1, d2;
    printf("Enter an two digit number: ");
    scanf("%d",&num);

    if(num>9&&num<100){
        d1=num/10;
        d2=num%10;
        printf("Sum of digits = %d",d1+d2);
    }else{
        printf("Not an Two Digit Num!");
    }
}