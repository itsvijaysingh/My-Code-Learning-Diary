// W a p that read a number and check whether it is positive, negative or zero
#include<stdio.h>
int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    if(num>0){
        printf("Postive Number!");
    }else if(num<0){
        printf("Negative!");
    }else{
        printf("Zero!");
    }
}