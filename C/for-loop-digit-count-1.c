#include <stdio.h>

int main(){
    long int num, i;
    printf("Enter a number:");
    scanf("%ld",&num);
    for(i=0;num>0;i++){
        num/=10;
    }
    printf("%ld Digit Number",i);
    return 0;
}
