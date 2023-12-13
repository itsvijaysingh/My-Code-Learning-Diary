//Write a program that read some seconds and convert them into minutes, hours and days.

#include <stdio.h>
void main(){
    int seconds, minutes, hours, days;

    printf("Enter seconds to convert them into M, H, D: ");
    scanf("%d",&seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;

    printf("%d Seconds = %d Minutes / %d Hours / %d Days",seconds,minutes,hours,days);

}