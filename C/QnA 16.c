// write a program that reads 6 numbers and checks if
// first and last is even number then swap Second Digit with Fifth Digit and Swap Third with Fourth Digit


#include <stdio.h>

void main()
{
   int num, d1, d2, d3, d4, d5, d6, swaper;
   printf("Enter a 6 Digit Number:");
   scanf("%d",&num);
   if(num>99999&&num<1000000){
       d6=num%10;
       num=num/10;

       d5=num%10;
       num=num/10;

       d4=num%10;
       num=num/10;

       d3=num%10;
       num=num/10;

       d2=num%10;
       num=num/10;

       d1=num;

      if(d1%2==0&&d6%2==0){
        swaper=d2;
        d2=d5;
        d5=swaper;
        
        swaper=d3;
        d3=d4;
        d4=swaper;
        
        printf("After Swapping Num Is: %d%d%d%d%d%d",d1,d2,d3,d4,d5,d6);
      }else{
          printf("Not an Even Number.");
      }
   } else{
       printf("Please Enter a 6 Digit Number Only!");
}
}