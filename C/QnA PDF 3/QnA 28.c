// W a p that read a number and check whether it is of one digit negative number or not.

#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num<0&&num>-10){
        printf("Negative One Digit Number!");
    }else{
        printf("Not Negative One Digit Number!");
    }

}