// w a p that read three numbers and print Max\nimum and Min\nimum out of them using if

#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers(Seprated by space): ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3){
        printf("%d Is Max\n",num1);
    }

    if(num2>num1&&num2>num3){
        printf("%d Is Max\n",num2);
    }

    if(num3>num1&&num3>num2){
        printf("%d Is Max\n",num3);
    }

    if(num1<num2&&num1<num3){
        printf("%d Is Min\n",num1);
    }

    if(num2<num1&&num2<num3){
        printf("%d Is Min\n",num2);
    }

    if(num3<num1&&num3<num2){
        printf("%d Is Min\n",num3);
    }
    

    
}