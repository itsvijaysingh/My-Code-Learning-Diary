#include <stdio.h>

int main() {
    int num = 28, i = 1, sum = 0;

    do {
        if (num % i == 0) {
            sum = sum + i;
        }
        i++;
    } while (i <= num / 2);

    if (sum == num) {
        printf("It's a perfect number");
    } else {
        printf("Not a perfect number");
    }

    return 0;
}
