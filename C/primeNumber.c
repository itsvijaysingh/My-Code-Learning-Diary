//check prime or not
#include <stdio.h>

int main() {
    int num = 0, check = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a prime number.\n");
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                check = 1;
                break; 
            }
        }

        if (check == 0) {
            printf("It's a prime number.\n");
        } else {
            printf("Not a prime number.\n");
        }
    }
}
