//Write a program that read two numbers and print triple of second number and print five times of first number.

void main(){
    int num1, num2;
    printf("Enter Two Numbers (Seprated By Space): ");
    scanf("%d%d",&num1,&num2);

    printf("Triple of Secoond Number(%d) is: %d",num2,num2*3);
    printf("\nFive Times of First Num(%d) is: %d",num1,num1*5);
}