// Write a program that read some seconds and convert them into minutes and hours.

void main(){
    int seconds, hour, minutes;
    printf("--------: Seconds to Minutes and Hours Converter :---------\n");
    printf("Enter Seconds That Would You Like To Convert Into Minutes: ");
    scanf("%d",&seconds);

    minutes = seconds/60;
    hour = minutes/60;

    printf("%d Seconds = %d hour %d Minutes",seconds,hour,minutes);
}