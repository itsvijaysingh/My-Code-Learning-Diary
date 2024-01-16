#include <stdio.h>

int main() {
    int num=0, i, min=0, max=0;
    printf("Enter Elements: ");
    for(i=0;i<3;i++){
        scanf("%d",&num);
        if(i==0){
           min=num;
           max=num;
        }else{
            if(num<min){
                min=num;
            }
            if(num>max){
                max=num;
            }
        }
    }
    printf("\nMin: %d",min);
    printf("\nMax: %d",max);
    
    
    return 0;
}
