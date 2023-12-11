#include <stdio.h>

void main(){
    long int num, i;
    printf("Enter a number:");
    scanf("%ld",&num);
    while(num>0){
        i++;
        num/=10;
    }
    printf("%ld Digit Number",i);
}
