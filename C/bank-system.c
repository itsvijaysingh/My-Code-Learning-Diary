#include<stdio.h>
main(){
    long int option, account_num, account_pin, mobile_num, email_add;
    printf("_______________________________________________________________\n");
    printf("|                         No Lena-Dena Bank                    |\n");
    printf("|______________________________________________________________|\n");
    printf("\t\t\t\t\t\t\tWelcome Back!\n\n");
    printf("Please Choose Option By Entering Option Number (eg. 1):\n");
    printf("\t(1) Login Into Account\n");
    printf("\t(2) Change/Forgot Pin\n");
    printf("\t(3) Contact Customer Care\n");
    
    scanf("%ld",&option);
    if(option>0&&option<4){
        
        if(option==1){
            printf("Enter Your 12 Digit Account Number: ");
            scanf("%ld",&account_num);
            if (account_num > 99999999999 && account_num <= 999999999999) {
                printf("Enter Your 4 Digit Account Pin: ");
                scanf("%ld",&account_pin);
                    if(account_pin>999&&account_pin<=9999){
                         printf("Logined Successfully.");
                    }else{
                        printf("Incorrect Pin! Please Check Its Correct or Not.");
                    }
                } else{
                 printf("Wrong Account Number! Please Check Its Correct or Not.");
                }
                
                
                
    }else if(option==2){
        printf("Please Choose Option By Entering Option Number (eg. 1):\n");
        printf("\t(1) Change Pin with Old Pin\n");
        printf("\t(2) Change Pin with Mobile Otp\n");
        printf("\t(3) Change Pin with Email Otp\n");
        scanf("%ld",&option);
    
        if(option==1){
                printf("Enter Your 12 Digit Account Number: ");
                    scanf("%ld",&account_num);
                if (account_num > 99999999999 && account_num <= 999999999999) {
                printf("Please Enter Your Old Pin: ");
                scanf("%ld",&account_pin);
                if(account_pin>999&account_pin<=9999){
                    printf("Enter Your New Pin.");
                    scanf("%ld",&account_pin);
                    if(account_pin>999&account_pin<=9999){
                        printf("Succesfully Updated Your Pin.");
                    } else{
                        printf("Only 4 Digits Pin Allowed.");
                    }
                }else{
                  printf("Incorrect Old Pin! Please Check Its Correct or Not.");
                     }
                } else{
                    printf("Wrong Account Number! Please Check Its Correct or Not.");
                }  
        }else if(option==2){
                printf("Enter Your 12 Digit Account Number: ");
                scanf("%ld",&account_num);
                if (account_num > 99999999999 && account_num <= 999999999999) {
                    printf("Please Enter Your Linked Mobile Number: ");
                    scanf("%ld",mobile_num);
                    if(mobile_num>999999999 && mobile_num<10000000000){
                        printf("Enter the 6 Digit Otp Sent To Your Mobile:");
                        scanf("%ld",&option);
                        if(option>99999&&option<1000000){
                            printf("Enter Your New Pin.");
                            scanf("%ld",&account_pin);
                            if(account_pin>999&account_pin<=9999){
                             printf("Succesfully Updated Your Pin.");
                               } else{
                                 printf("Only 4 Digits Pin Allowed.");
                     }
                        }else{
                            printf("Incorrect OTP!");
                        }
                        
                    }else{
                        printf("The Number You Entered is Either Wrong or Not Linked To Your Account!");
                    }
                } else{
                    printf("Wrong Account Number! Please Check Its Correct or Not.");
                } 
            }else{
                
                 printf("Enter Your 12 Digit Account Number: ");
                    scanf("%ld",&account_num);
                if (account_num > 99999999999 && account_num <= 999999999999) {
                    printf("");
                } else{
                    printf("Wrong Account Number! Please Check Its Correct or Not.");
                } 
                
            }
            
            
            
            
        }else{
            printf("---------: Talk to Us - No Lena-Dena Customer Service :--------\n");
            printf("\t\tMissed Call Service: 9999999999/8888888888\n");
            printf("\t\tToll Free Number: 1888 888 000\n");
            printf("\t\tEmail Us: care@nolenadenabank.com");
        }
        
        
    } else{
        printf("Please Enter Correct Option Number!");
    }
}