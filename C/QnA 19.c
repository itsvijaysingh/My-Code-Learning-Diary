//Write a program that read some minutes and convert them into hours (60 minutes = 1 hour).

void main(){
    int min;
    printf("--------: Minutes To Hours Converter :---------\n");
    printf("Enter Minutes That Would You Like To Convert Into Hours: ");
    scanf("%d",&min);

    printf("%d Minutes = %d Hours",min,min/60);
}