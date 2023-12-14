// W a p that read a number and check whether it is of positive two digits or not.
#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num>9&&num<100){
        printf("Positive Two Digit Number!");
    }else{
         printf("Not Postive Two Digit Number!");
    }
}