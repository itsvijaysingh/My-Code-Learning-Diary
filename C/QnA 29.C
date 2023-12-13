// Write a program that read some days and convert them into months (30 days = 1 month).

#include <stdio.h>
void main(){
    int days, months;

    printf("Enter months to convert them into day: ");
    scanf("%d",&days);

    months= days/30;
    printf("%d Days = %d Months",days,months);
}

