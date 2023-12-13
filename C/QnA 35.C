// Write a program that read some years and convert them into months, days, hours, minutes and seconds.
#include <stdio.h>

void main(){
    int years, months, days, hours, minutes, seconds;
    printf("Enter years to convert them into M,D,H,M,S: ");
    scanf("%d",&years);

    months=years*12;
    days=months*30;
    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("%d Years = %d Months / %d Days / %d Hours / %d Minutes /  %d Seconds",years,months,days,hours,minutes,seconds);

    
}