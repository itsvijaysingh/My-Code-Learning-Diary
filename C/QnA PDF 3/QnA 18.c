// w a p that show all bitwise operators in one print command.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two num(Seprated by space): ");
    scanf("%d %d",&a,&b);

    printf(" a = %d b = %d\n",a,b);
    printf("a & b=%d\n",a&b);
    printf("a | b=%d\n",a|b);
    printf("a ^ b=%d\n",a^b);
    printf("a >> 1=%d\n",a>>1);
    printf("1 << a=%d\n",1<<a);
    printf("~ a=%d\n",~a);
}