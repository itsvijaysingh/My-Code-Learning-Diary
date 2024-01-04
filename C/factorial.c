// factorial
#include <stdio.h>

int main() {
    int num = 0, i = 0, fact = 1;
    printf("Enter an number: ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial is %d",fact);
    
}
