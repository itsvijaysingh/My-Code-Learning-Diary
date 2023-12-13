//Write a program that read some seconds and convert them into minutes, hours, days, months, and years.

#include <stdio.h>
void main(){
    int seconds,minutes,hours,days,months,years;
    printf("Enter Seconds to convert them into M, H, D, M, Y: ");
    scanf("%d",&seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;
    months=days/30;
    years=months/12;

    printf("%d Seconds = %d Minutes / %d Hours / %d Days / %d Months / %d Years",seconds,minutes,hours,days,months,years);

}