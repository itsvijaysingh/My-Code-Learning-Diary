// w a p that read a number and check whether it is even or odd.

#include<stdio.h>
void main(){
        int num;
        printf("Enter an number: ");
        scanf("%d",&num);
        if(num%2==0){
            printf("%d is Even Number!",num);
        }else{
            printf("%d is Odd Number!",num);
        }
}