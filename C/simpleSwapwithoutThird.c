#include <stdio.h>

int main() {
    int a = 20, b =10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nA: %d",a);
    printf("\nB: %d",b);
    return 0;
}
