//Write a program that read some hours and convert them into days (24 hours = 1 day).

void main(){
    int hours;
    float days;
    printf("Enter hours to convert them into days: ");
    scanf("%d",&hours);

    days=hours/24;

    printf("%d Hours = %f Days",hours,days);

}