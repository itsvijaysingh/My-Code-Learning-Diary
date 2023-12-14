// w a p that read a number and if it is less than 15 then print its double.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<15){
        printf("Double of %d = %d",num,num*2);
    }else{
        printf("Not less than 15");
    }
}