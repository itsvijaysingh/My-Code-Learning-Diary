//  Write a program that read some years and convert them into months (1 year = 12 months).

#include <stdio.h>
void main(){
    int years, months;
    printf("Enter some Years to convert them into Months: ");
    scanf("%d",&years);

   
    months=years*12;

    printf("%d Years = %d Months ",years,months);

}