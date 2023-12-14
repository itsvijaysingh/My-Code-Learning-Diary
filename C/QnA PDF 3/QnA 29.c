// W a p that read a number and check whether it is three digits even number or not.

#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num>99&&num<1000&&num%2==0){
        printf("Three Digit Even!");
    }else{
        printf("Not an Three Digit Even!");
    }
}