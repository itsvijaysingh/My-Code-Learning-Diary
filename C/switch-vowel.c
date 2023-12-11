//write an program that checks that the entered charcter is vowel or not and also check whether it is uppercase or lowercase


#include <stdio.h>
void main(){
    char ch;
    printf("-------------: Vowel Character Checker: ------------");
    printf("\nEnter an Character: ");
    scanf("%c",&ch);

    switch(ch){
        case 'A':
                 printf("Uppercase Vowel");
                 break;
        case 'E':
                 printf("Uppercase Vowel");
                 break;
        case 'I':
                 printf("Uppercase Vowel");
                 break;
        case 'O':
                 printf("Uppercase Vowel");
                 break;
        case 'U':
                 printf("Uppercase Vowel");
                 break;
        default:
                 switch(ch){
                        case 'a':
                                printf("Lowercase Vowel");
                                break;
                        case 'e':
                                printf("Lowercase Vowel");
                                break;
                        case 'i':
                                printf("Lowercase Vowel");
                                break;
                        case 'o':
                                printf("Lowercase Vowel");
                                break;
                        case 'u':
                                printf("Lowercase Vowel");
                                break;
                        default:
                                printf("You had entered an Consonant Character!");
                                break; 
                    }                    
                 break; 
    }                    

}