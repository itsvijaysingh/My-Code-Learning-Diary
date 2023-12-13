// Write a program that read height and width of a rectangle and print its area and perimeter (area = height * width) (perimeter = (2*height) + (2*width) ).

#include <stdio.h>
void main(){
    int height, width, area, perimeter;
    print("Enter the height of rectangle: ");
    scanf("%d",&height);

    print("Enter the width of rectangle: ");
    scanf("%d",&width);

    area=height*width;
    perimeter=(2*height) + (2*width);

    printf("Rectangle Area = %d\n",area);
    printf("Rectangle Perimeter = %d",perimeter);
}