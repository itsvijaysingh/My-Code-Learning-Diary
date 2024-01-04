// wap to accept an integer and display avergae of even digit
#include <stdio.h>
int main() {
  int num=0, digit=0, sum=0, count=0, average=0;
  printf("Enter an number: ");
  scanf("%d",&num);
  while(num!=0){
      digit=num%10;
      if(digit%2==0){
          sum+=digit;
          count++;
      }
      num=num/10;
  }
  if (count > 0) {
        average = sum / count;
        printf("Average of even digits is: %d", average);
    } else {
        printf("No even digits found.");
    }
}
