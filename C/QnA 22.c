// Write a program that read some minutes and convert them into hours and seconds.

void main(){
    int minutes, hours, seconds;
    printf("--------: Minutes to Hours and Seconds Converter :---------\n");
    printf("Enter Minutes That Would You Like To Convert Into Hours/Seconds: ");
    scanf("%d",&minutes);

    hours = minutes/60;
    seconds = minutes*60;

    printf("%d Minutes = %d hours / %d seconds",minutes,hours,seconds);
}