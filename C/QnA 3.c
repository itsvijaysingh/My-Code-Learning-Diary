//Write a program that read four numbers and print sum of first three numbers and print multiply of last three numbers.

void main()
{
    int num1, num2, num3, num4;
    printf("Enter four number (Seprated by space):");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    num1+num2+num3;
    num2*num3*num4;

    printf("Sum of first three numbers: %d",num1+num2+num3);
    printf("\nMultiply of last three numbers: %d",num2*num3*num4);
}