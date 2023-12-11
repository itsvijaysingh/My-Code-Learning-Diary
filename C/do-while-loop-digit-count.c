#include <stdio.h>

void main(){
    long int num, i;
    printf("Enter a number:");
    scanf("%ld",&num);
    do{
        i++;
        num/=10;
    }while(num>0);
    printf("%ld Digit Number",i);
}
