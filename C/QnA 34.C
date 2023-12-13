//  Write a program that read some months and convert them into years (12 months = 1 year).


#include <stdio.h>
void main(){
    int months, years;
    printf("Enter some Months to convert them into Years: ");
    scanf("%d",&months);

   
    years=months/12;

    printf("%d Months = %d Years ",months,years);

}