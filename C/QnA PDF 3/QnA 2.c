//w a p that read days and convert it into months and remaining days (assume that 30 days = 1 month).

#include<stdio.h>
void main(){
        int days,months,remaining;
        printf("Enter the days: ");
        scanf("%d",&days);

        months=days/20;
        remaining=days%30;
        printf("%d Days = %d Months & %d Days",days,months,remaining);
}