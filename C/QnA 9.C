// Write a program that read marks of four subjects and print their AVERAGE.

void main(){
    int english, hindi, maths, science, average;
    printf("Enter Your English Subject Marks: ");
    scanf("%d",&english);

    printf("Enter Your Hindi Subject Marks: ");
    scanf("%d",&hindi);

    printf("Enter Your Maths Subject Marks: ");
    scanf("%d",&maths);

    printf("Enter Your Science Subject Marks: ");
    scanf("%d",&science);

   average=english+hindi+maths+science/4;

    printf("Your Total Marks Average is: %d",average);
}