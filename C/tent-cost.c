#include <stdio.h>
#include <conio.h>

void main() {
    float height, base, side,  trianglearea, squarearea, totalarea, tentcost;

    clrscr();

    printf("Enter the height of the triangular part of the tent: ");
    scanf("%f", &height);
    
    printf("Enter the base of the triangular part of the tent: ");
    scanf("%f", &base);
    
    printf("Enter the side length of the square base of the tent: ");
    scanf("%f", &side);
    
    trianglearea = (float)1/2 * height * base;
   	squarearea = side * side;
    totalarea = trianglearea + squarearea;
    tentcost = totalarea * 275;
    printf("The cost of the tent is Rs %f", tentcost);
    getch();
}
