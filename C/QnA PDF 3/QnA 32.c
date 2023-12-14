// W a p that read a four digits number and print its sum and average of digits.

#include<stdio.h>
void main(){
    int num, d1, d2, d3, d4;
    printf("Enter an 4 digit number: ");
    scanf("%d",&num);

    if(num>999&&num<10000){
        d1=num%10;
        num=num/10;

        d2=num%10;
        num=num/10;
        
        d3=num%10;
        num=num/10;
        
        d4=num;
        
        printf("Digits:  %d\n%d\n%d\n%d\n\n",d1,d2,d3,d4);
        printf("Sum of digits = %d\n",d1+d2+d3+d4);
        printf("Average of digits = %d\n",d1+d2+d3+d4/4);
    }else{
        printf("Not an Four Digit Num!");
    }
}