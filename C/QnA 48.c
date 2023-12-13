// Write a program that show result of following quadratic equation :
// -b+underroot(b*2)-(4*a*c)/(2*a)

#include<stdio.h>
void main(){
    int a, b, c, res;
    printf("Enter three numbers a & b & c: ");
    scanf("%d %d %d",&a&b&c);

    res=-b+sqrt((b*2)-(4*a*c)/(2*a));
    printf("-b+underroot(b*2)-(4*a*c)/(2*a) = %d",res);
}
 