// wap to accept 5 integer in loop and display count of 3 digit even number
#include <stdio.h>
int main() {
   int num=0, i=0, evenCount=0;
   for(i=1;i<=5;i++){
       printf("Enter #%d Number: ",i);
       scanf("%d",&num);
       if(num>99&&num<1000&&num%2==0){
           evenCount++;
       }
   }
   if(evenCount>0){
       printf("There are total %d digit are three digit even number.",evenCount);
   }else{
              printf("There are no digit are three digit even number.");
   }
   
}
