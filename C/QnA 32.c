// Write a program that read some days and convert them into hours, minutes, seconds and months.

#include <stdio.h>
void main(){
    int days, hours, minutes, seconds, months;
    printf("Enter some Days to convert them into H, M, S, M: ");
    scanf("%d",&days);

    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;
    months=days/30;

    printf("%d Days = %d Hours / %d Minutes / %d Seconds / %d Months",days,hours,minutes,seconds,months);

}