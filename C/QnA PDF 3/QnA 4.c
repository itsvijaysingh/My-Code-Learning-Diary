// w a p that read a year and check whether it is leap year or not.

#include<stdio.h>
void main(){
    int year;
    printf("Enter an Year: ");
    scanf("%d",&year);

    if(year%4==0&&year%100!=0||year%400==0){
        printf("%d is an Leap year!",year);
    }else{
        printf("Not an leap year!");
    }
}