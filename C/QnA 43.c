// Write a program that read some amount in rupees and convert it into form of cash notes (2000, 500, 200, 100, 50, 20, 10, 5, 2, 1) (for eg. suppose user enter 3800 rupees then the output should be 1 note(s) of 2000, 3 note(s) of 500, 1 note(s) of 200 and 1 note of 100).

#include <stdio.h>

void main(){
    long int amount, two_k, five_h, two_h, one_h, fifty, twenty, ten, five, two, one;
    printf("Enter the amount to calculate notes: ");
    scanf("%ld",&amount);

    two_k = amount/2000;
    amount = amount%2000;

    five_h = amount/500;
    amount = amount%500;

    two_h = amount/200;
    amount = amount%200;

    one_h = amount/100;
    amount = amount%100;

    fifty = amount/50;
    amount = amount%50;

    twenty = amount/20;
    amount = amount%20;

    ten = amount/10;
    amount = amount%10;

    five = amount/5;
    amount = amount%5;

    two = amount/2;
    amount = amount%2;

    one = amount;

    printf("Notes :\n");
    printf("2000 Notes(S) = %ld \n",two_k);
    printf("500 Notes(S) = %ld \n",five_h);
    printf("200 Notes(S) = %ld \n",two_h);
    printf("100 Notes(S) = %ld \n",one_h);
    printf("50 Notes(S) = %ld \n",fifty);
    printf("20 Notes(S) = %ld \n",twenty);
    printf("10 Notes(S) = %ld \n",ten);
    printf("5 Notes(S) = %ld \n",five);
    printf("2 Notes(S) = %ld \n",two);
    printf("1 Notes(S) = %ld",one);

}