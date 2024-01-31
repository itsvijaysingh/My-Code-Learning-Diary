#include <stdio.h>

int main() {
   int num1, num2;
   char choice;
   printf("Enter two numbers: ");
   scanf("%d %d",&num1,&num2);
   printf("What you want to do: + - * / %");
   scanf(" %c", &choice);
   printf("\nNum 1: %d\nNum 2: %d",num1,num2);
   printf("\nResult of %d %c %d is: ", num1, choice, num2);
   switch(choice){
     case '+':
            printf("%d",num1+num2);
            break;
    case '-':
            printf("%d",num1+num2);
            break;
    case '*':
            printf("%d",num1*num2);
            break;
    case '/':
            printf("%d",num1/num2);
            break;
    case '%':
            printf("%d",num1%num2);
            break;
    default:
            printf("Invalid Choice");
            break;
   }
    return 0;
}
