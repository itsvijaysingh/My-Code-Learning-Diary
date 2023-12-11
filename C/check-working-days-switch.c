//write an program that checks if entered day count is working or holiday (using switch)


//method 1

#include <stdio.h>
void main(){
    int num;
    printf("Enter a number between 1-7: ");
    scanf("%d",&num);

    switch(num){
        case 1:
                printf("Working Day!");
                break;
        case 2:
                printf("Working Day!");
                break;

        case 3:
                printf("Working Day!");
                break;
        case 4:
                printf("Working Day!");
                break;
        case 5:
                printf("Working Day!");
                break;
        case 6:
                printf("HoliDay!");
                break;
        case 7:
                printf("HoliDay!");
                break;
        default:
                printf("Invalid Day!");
                break;

    }

}


// method 2

#include <stdio.h>
void main(){
    int num;
    printf("Enter a number between 1-7: ");
    scanf("%d",&num);

    switch(num>0&&num<=5){
        case 1:
                printf("Working Day!");
                break;
        case 0:
                switch(num>=6&&num<=7){
                    case 1:
                            printf("Holiday!");
                            break;
                    case 0:
                            printf("Invalid Day!");
                            break;
                }
                break;
    }

}