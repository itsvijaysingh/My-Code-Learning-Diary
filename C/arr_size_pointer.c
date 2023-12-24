#include<stdio.h>
int main(){
	      int arr[] = {1,2,3,4,5};
	      int arr_length = *(&arr+1)-arr;
      	printf("Array Length: %d",arr_length);
          return 0;
}