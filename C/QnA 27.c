//Write a program that read some hours and convert them into minutes, seconds and days.

void main(){
    int hours, minutes, seconds, days;
    printf("Enter hours to convert them into minutes, seconds, days: ");
    scanf("%d",&hours);

    minutes=hours*60;
    seconds=minutes*60;
    days=hours/24;

    printf("%d Hours = %d Minutes / %d Seconds / %d Days",hours,minutes,seconds,days);
}