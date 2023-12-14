// W a p that read a number and check whether it is of negative two digits or not.

#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num<-9&&num>-100){
        printf("Negative Two Digit Number!");
    }else{
         printf("Not Negative  Two Digit Number!");
    }
}