// wap to accept an integer and display count sum of digit
#include <stdio.h>
int main() {
   int num=0, digit=0, sum=0;
   printf("Enter an number: ");
   scanf("%d",&num);
   while(num!=0){
       digit=num%10;
       sum+=digit;
       num=num/10;
   }
   printf("Sum of all digit is %d",sum);
}
