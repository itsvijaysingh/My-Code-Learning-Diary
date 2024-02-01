#include <stdio.h>
int main() {
    int num=0, ones=0, tens=0;
    printf("--: Numeric to Words Converter :--");
    printf("\nEnter an number: ");
    scanf("%d",&num);
    if(num==0){
            printf("Zero");
    }else if(num>0){
        if(num>=11 && num<=19){
                switch(num){
                        case 11:
                                printf("Eleven");
                                break;
                        case 12:
                                printf("Twelve");
                                break;
                        case 13:
                                printf("Thirteen");
                                break;
                        case 14:
                                printf("Fourteen");
                                break;
                        case 15:
                                printf("Fifteen");
                                break;
                        case 16:
                                printf("Sixteen");
                                break;
                        case 17:
                                printf("Seventeen");
                                break;
                        case 18:
                                printf("Eighteen");
                                break;
                        case 19:
                                printf("Nineteen");
                                break;
                }

                }else {
                if(num>=10){
                        tens=num/10*10;
                        switch(tens){
                                case 10:
                                        printf("Ten\t");
                                        break;
                                case 20:
                                        printf("Twenty\t");
                                        break;
                                case 30:
                                        printf("Thirty\t");
                                        break;
                                case 40:
                                        printf("Fourty\t");
                                        break;
                                case 50:
                                        printf("Fifty\t");
                                        break;
                                case 60:
                                        printf("Sixty\t\t");
                                        break;
                                case 70:
                                        printf("Seventy\t");
                                        break;
                                case 80:
                                        printf("Eighty\t");
                                        break;
                                case 90:
                                        printf("Ninty\t");
                                        break;
                        }
                        }
                        
                        

                        ones = num%10;
                        switch(ones){
                                case 1:
                                        printf("One\t");
                                        break;
                                case 2:
                                        printf("Two\t");
                                        break;
                                case 3: 
                                        printf("Three\t\t");
                                        break;
                                case 4:
                                        printf("Four\t");
                                        break;
                                case 5:
                                        printf("Five\t");
                                        break;
                                case 6:
                                        printf("Six\t");
                                        break;
                                case 7: 
                                        printf("Seven\t");
                                        break;
                                case 8: 
                                        printf("Eight\t");
                                        break;
                                case 9:
                                        printf("Nine\t");
                                        break;
                        }
                }
    }else if(num==100){
            printf("One Hundred");
    }else{
        printf("Number should be between 0 and 100");
    }
}


