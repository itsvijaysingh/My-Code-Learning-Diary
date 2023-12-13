//Write a program that read some seconds and convert them into mintues (1 minute = 60 seconds).

void main(){
    int second;
    printf("--------: Seconds To Minutes Converter :---------\n");
    printf("Enter Second That Would You Like To Convert Into  Minutes: ");
    scanf("%d",&second);

    printf("%d Seconds = %d Mintutes",second,second/60);
}