// Write a program that calculate following formula a2+b2-2ab or (a*a)+(b*b)-(2*a*b).

#include <stdio.h>
void main(){
    int a, b, res;
    printf("Enter Two Numbers a & b: ");
    scanf("%d %d",&a&b);

    res=(a*a)+(b*b)-(2*a*b);

    printf("a2+b2-2ab = %d",res);

}