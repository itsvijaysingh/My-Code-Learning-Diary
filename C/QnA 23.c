// Write a program that read some days and convert them into hours (1 day = 24 hours).

void main(){
    int days, hours;
    printf("Enter the days which would you like to convert: ");
    scanf("%d",&days);

    hours=days*24;
    printf("%d Days = %d Hours",days,hours);

}