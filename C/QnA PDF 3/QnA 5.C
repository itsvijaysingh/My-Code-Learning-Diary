// w a p that read two numbers and swap them using third variable.

void main(){
    int num1, num2, temp;
    printf("Enter two Numbers: ");
    scanf("%d %d",&num1,&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapping First Number is %d and Second Number is %d",num1,num2);


}