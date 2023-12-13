//Write a program that read two numbers and print their addition, subtraction, multiplication, division and modulus.

void main(){
    int num1, num2;
    printf("Enter Two Numbers (Seprated By Space): ");
    scanf("%d%d",&num1,&num2);

    printf("Addition: %d",num1+num2);
    printf("\nSubstraction: %d",num1-num2);
    printf("\nMultiplication: %d",num1*num2);
    printf("Division: %d",num1/num2);
    printf("Modulus: %d",num1%num2);

}