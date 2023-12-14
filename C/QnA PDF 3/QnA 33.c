// W a p that read a three digits number and print its multiply of digits.

#include<stdio.h>
void main(){
    int num, d1, d2, d3;
    printf("Enter an 3 digit number: ");
    scanf("%d",&num);

    if(num>99&&num<1000){
        d1=num%10;
        num=num/10;

        d2=num%10;
        num=num/10;
        
        d3=num;
        
        printf("Digits:  %d\n%d\n%d\n\n",d1,d2,d3);
        printf("Multiply of digits = %d\n",d1*d2*d3);
    }else{
        printf("Not an Three Digit Num!");
    }
}