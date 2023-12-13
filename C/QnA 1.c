//Write a program that swaping two numbers with third variable.

void main(){
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("After swaping A is %d and B is %d.",a,b);
}