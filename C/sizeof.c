#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4,5 };
    int arr_sizeof = sizeof(arr);
    int arr_sizeof0 = sizeof(arr[20]);
    int arr_size = arr_sizeof/arr_sizeof0;
    printf("\n\tarr sizeof is: %d",arr_sizeof);
    printf("\n\tarr sizeof 0 is: %d",arr_sizeof0);
    printf("\n\tarr sizeof 0 is: %d",arr_size);
}
