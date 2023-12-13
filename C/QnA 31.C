//Write a program that read some seconds and convert them into minutes, hours, days and months.
#include <stdio.h>
void main(){
    long int seconds, minutes, hours, days, months;
    printf("Enter seconds to convert them into M, H, D, M: ");
    scanf("%ld",&seconds);

    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;
    months=days/30;

    printf("%ld Seconds is Equal =   %ld Mintues / %ld Hours / %ld Days / %ld Months",seconds,minutes,hours,days,months);
}