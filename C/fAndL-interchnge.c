#include <stdio.h>

int main() {
    int num=1347, fDigit=0, lDigit=0;
    printf("Original Num: %d",num);
    
    lDigit = num%10;
    printf("\nlDigit: %d",lDigit);
    
    num=num/10;
    printf("\nNum: %d",num);
    
    fDigit = num/100;
    printf("\nfDigit: %d",fDigit);
    
    num=num%100;
    printf("\nNum: %d",num);
    
    num=lDigit*1000+num*10+fDigit;
    printf("\nNum: %d",num);
 
    return 0;
}
