//Write a program that read some months and convert them into days (1 month = 30 days).

#include <stdio.h>
void main(){
    int months, days;

    printf("Enter months to convert them into day: ");
    scanf("%d",&months);

    days= months*30;
    printf("%d Months = %d Days",months,days);
}

