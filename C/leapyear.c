#include <stdio.h>

int main() {
    int num;
    printf("Enter an num: ");
    scanf("%d",&num);
    if(num%4==0 && (num % 100 !=0 || num % 400 == 0)){
        printf("%d is an Leap Year!",num);
    }else{
        printf("%d is not an Leap Year!",num);
    }
    return 0;
}
