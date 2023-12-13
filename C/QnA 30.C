// Write a program that read some months and convert them into days, hours, minutes and seconds.

#include <stdio.h>
void main(){
    int months, days, hours, minutes,seconds;
    printf("Enter months to convert into D, H, M, S: ");
    scanf("%d",&months);
    days=months*30;
    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("%d Months = %d  Days / %d Hours / %d Minutes / %d Seconds",months,days,hours,minutes,seconds);
}