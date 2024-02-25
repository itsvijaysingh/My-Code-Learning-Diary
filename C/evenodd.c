#include <stdio.h>

int main() {
    int num;
    printf("Enter an num: ");
    scanf("%d",&num);
    if(num>=10 && num<=99){
        if(num%2==0){
            printf("Even");
        }else{
            printf("Odd");
        }
    }else{
        printf("Not an two digit num!");
    }
    return 0;
}
