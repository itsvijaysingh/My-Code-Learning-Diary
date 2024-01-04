// wap to accept 5 integer and display count of even integer and sum of odd integer
#include <stdio.h>
int main() {
   int num=0, evenCount=0, oddSum=0, i;
   for(i=1;i<=5;i++){
       printf("Enter #%d Number: ",i);
       scanf("%d",&num);
       if(num%2==0){
           evenCount++;
       }else{
           oddSum+=num;
       }
   }
   printf("Even Count: %d\n",evenCount);
   printf("Odd Sum: %d",oddSum);
}
