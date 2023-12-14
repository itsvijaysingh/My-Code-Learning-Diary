//  w a p that show increment and decrement operators with both prefix and postfix format.

#include<stdio.h>
void main(){
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    printf("Num = %d\n",num);
    printf("Num++ = ",num++);
    printf("%d\n",num);

    printf("Num-- = ",num--);
    printf("%d\n",num);

    printf("++Num = ",++num);
    printf("%d\n",num);

    printf("--Num = ",--num);
    printf("%d\n",num);


}