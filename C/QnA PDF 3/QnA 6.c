// w a p that read two numbers and swap them without third variable.

void main(){
    int num1, num2;
    printf("Enter two Numbers: ");
    scanf("%d %d",&num1,&num2);

    num1=num1+num2; //1+2=3
    num2=num1-num2; // 2-3=1
    num1=num1-num2; //1-3=2;

    printf("After swapping First Number is %d and Second Number is %d",num1,num2);


}


