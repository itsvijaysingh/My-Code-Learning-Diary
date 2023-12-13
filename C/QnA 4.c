/* Write a program that read/input/accept/enter/take a number and print its square, also print its double and also print its four times.
*/

void main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    printf("Square of %d Number is: %d",num,num*num);
    printf("\nDouble of %d Number is: %d",num,num+num);
    printf("\nFour Times of %d Number is: %d",num,num*4);
    
}