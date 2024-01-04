// wap to accept 5 integer in loop and display count of positive + negative + zero digit
#include <stdio.h>
int main() {
  int num=0, posCount=0, negCount=0, zeroCount=0;
  for(int i =1;i<=5;i++){
      printf("Enter #%d Number: ",i);
      scanf("%d",&num);
      if(num>0){
          posCount++;
      }else if(num<0){
          negCount++;
      }else{
          zeroCount++;
      }
  }
  printf("\nPositive Number: %d",posCount);
  printf("\nNegtive Number: %d",negCount);
  printf("\nZero Number: %d",zeroCount);

}
