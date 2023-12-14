// W a p that read a number and check whether it is one digit odd number or not.

#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num>0&&num<10&&num%2!=0){
        printf("One Digit Odd!");
    }else{
        printf("Not an One Digit Odd!");
    }
}