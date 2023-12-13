// Write a program that read some days and convert them into hours and minutes and seconds.

void main(){
    int days, hours, minutes, seconds;
    printf("Enter Days to convert into H,M,S: ");
    scanf("%d",&days);

    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;

    printf("%d Days = %d Hours / %d Minutes / %d Seconds",days,hours,minutes,seconds);

}