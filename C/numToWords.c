#include <stdio.h>

int main() {
    int num;
    
    // Input: Take a number from the user between 1 and 100
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    // Check if the entered number is within the valid range
    if (num >= 1 && num <= 100) {
        // Handle numbers from 11 to 19 as special cases
        if (num >= 11 && num <= 19) {
            switch (num) {
                case 11:
                    printf("Eleven\n");
                    break;
                case 12:
                    printf("Twelve\n");
                    break;
                case 13:
                    printf("Thirteen\n");
                    break;
                // Handle the rest of the teens
                default:
                    // For numbers 14 to 19
                    switch (num % 10) {
                        case 4:
                            printf("Fourteen\n");
                            break;
                        case 5:
                            printf("Fifteen\n");
                            break;
                        case 6:
                            printf("Sixteen\n");
                            break;
                        case 7:
                            printf("Seventeen\n");
                            break;
                        case 8:
                            printf("Eighteen\n");
                            break;
                        case 9:
                            printf("Nineteen\n");
                            break;
                    }
                    break;
            }
        } else {
            // Extract tens and ones digits
            int tens = num / 10;
            int ones = num % 10;

            // Print the words for the tens place
            if (tens > 1) {
                switch (tens) {
                    case 2:
                        printf("Twenty ");
                        break;
                    case 3:
                        printf("Thirty ");
                        break;
                    case 4:
                        printf("Forty ");
                        break;
                    case 5:
                        printf("Fifty ");
                        break;
                    case 6:
                        printf("Sixty ");
                        break;
                    case 7:
                        printf("Seventy ");
                        break;
                    case 8:
                        printf("Eighty ");
                        break;
                    case 9:
                        printf("Ninety ");
                        break;
                }
            }

            // Print the words for the ones place
            switch (ones) {
                case 1:
                    printf("One\n");
                    break;
                case 2:
                    printf("Two\n");
                    break;
                case 3:
                    printf("Three\n");
                    break;
                case 4:
                    printf("Four\n");
                    break;
                case 5:
                    printf("Five\n");
                    break;
                case 6:
                    printf("Six\n");
                    break;
                case 7:
                    printf("Seven\n");
                    break;
                case 8:
                    printf("Eight\n");
                    break;
                case 9:
                    printf("Nine\n");
                    break;
                // For numbers ending with zero, avoid printing an additional space
                case 0:
                    if (tens == 0) {
                        printf("Zero\n");
                    }
                    break;
            }
        }
    } else {
        // If the entered number is not within the valid range
        printf("Invalid input. Please enter a number between 1 and 100.\n");
    }

    return 0;
}
