//write an c program to take 4 digit number and display
//name or position of max number digit (using switch case)

void main() {
    int num, d1, d2, d3, d4;
    clrscr();

    printf("Enter a 4 Digit Number:");
    scanf("%d",&num);
    
   if (num>=1000 && num<=9999){

        d1=num/1000;
        num=num%1000;
        
        d2=num/100;
        num=num%100;
        
        d3=num/10;
        num=num%10;
        
        d4=num;
        
        if (d1 == d2 && d1 == d3 && d1 == d4) {
                printf("All digits are Same!");
            } else {
        
                switch (d1>d2&&d1>d3&&d1>d4) {
                    case 1:
                        printf("1st Digit (%d) is Max.",d1);
                        break;
                    case 0:
                        break;
                }
                
                switch (d2>d1&&d2>d3&&d2>d4) {
                    case 1:
                        printf("2nd Digit (%d) is Max.",d2);
                        break;
                    case 0:
                        break;
                }
                
                switch (d3>d1&&d3>d2&&d3>d4) {
                    case 1:
                        printf("3rd Digit (%d) is Max.",d3);
                        break;
                    case 0:
                        break;
                }
                
                switch (d4>d1&&d4>d2&&d4>d3) {
                    case 1:
                        printf("4th Digit (%d) is Max.",d4);
                        break;
                    case 0:
                        break;
                }
        
            }
    }else{
        printf("Only 4 Digit Numbers Allowed!");
    }
    getch();
}
