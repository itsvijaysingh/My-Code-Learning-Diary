// wap to accept an integer and display avergae of digit
#include <stdio.h>
int main() {
   int num=0, digit=0, sum=0, count=0, average=0;
   printf("Enter an number: ");
   scanf("%d",&num);
   while(num!=0){
       digit=num%10;
       sum+=digit;
       count++;
       num=num/10;
   }
   average=sum/count;
   printf("Average is: %d",average);
}
