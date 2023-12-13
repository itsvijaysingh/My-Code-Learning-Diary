// Write a program that read some days and convert them into hours, minutes, seconds, months, and years.
#include <stdio.h>
void main(){
    long int days, hours, minutes, seconds, months, years;
    printf("Enter Days to convert them into H, M, S, M, Y: ");
    scanf("%ld",&days);

    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;
    months=days/30;
    years=months/12;

    printf("%ld Days = %ld Hours / %ld Minutes / %ld Seconds /  %ld Months / %ld Years",days,hours,minutes,seconds,months,years);

}