// W a p that read a three digits number and print its reverse.

#include<stdio.h>
int main(){
    int num, d1, d2, d3, rev;
    printf("Enter an 3 digit number: ");
    scanf("%d",&num);

    if(num>99&&num<1000){
        d1=num%10*100;
        num=num/10;

        d2=num%10*10;
        num=num/10;
        
        d3=num;

        rev=d1+d2+d3;
        
        printf("Digits:  %d\n%d\n%d\n\n",d1,d2,d3);
        printf("Rev = %d\n",rev);
    }else{
        printf("Not an Three Digit Num!");
    }
    return 0;
}