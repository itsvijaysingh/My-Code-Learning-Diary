#include <stdio.h>
int main() {
    int arr[5] = {3,6,28,5,8};
 
    for(int i=0;i<5;i++){
        int sum=0; /// number rested
        for(int j=1;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                sum+=j;
            }
        }
        if(sum==arr[i])
        {
            printf("%d is perfect number\n",arr[i]);
            break;
        }
    }

}