// Write a program that read marks of four subjects and print their total.

void main(){
    int english, hindi, maths, science, total;
    printf("Enter Your English Subject Marks: ");
    scanf("%d",&english);

    printf("Enter Your Hindi Subject Marks: ");
    scanf("%d",&hindi);

    printf("Enter Your Maths Subject Marks: ");
    scanf("%d",&maths);

    printf("Enter Your Science Subject Marks: ");
    scanf("%d",&science);

    total=english+hindi+maths+science;

    printf("Your Total Marks is: %d",total);
}