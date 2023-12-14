// W a p that read a number and check whether it is of positive or negative two digits or not.


#include<stdio.h>
void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num>9&&num<100){
        printf("Positive Two Digit Number!");
    }else if(num<-9&&num>-100){
         printf("Not Negative  Two Digit Number!");
    }else{
        printf("Nor Positive or Nor Negative!");
    }
}