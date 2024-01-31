#include <stdio.h>

int main() {
    int num;
    printf("Enter an num: ");
    scanf("%d",&num);
    switch(num){
        case 0: 
                printf("Num is zero.");
                break;
        default:
                switch(num>0){
                    case 1:
                            printf("Num is greater than zero.");
                            break;
                    default:
                            printf("Num is less than zero.");
                            break;  
                }
    }
    return 0;
}
