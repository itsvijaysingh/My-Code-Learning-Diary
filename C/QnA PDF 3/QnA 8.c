// w a p that read a number and if it is not equal to 100 then print ok otherwise print not ok.

#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num!=100){
         printf("Ok!");
    }else{
        printf("Not Ok!");
    }
}