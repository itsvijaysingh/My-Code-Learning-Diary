//write an program that reads three different numbers and find max in them
// Using Switch Case Only
 
    printf("Enter three different numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    max = num1;

    
    switch (num2 > max) {
        case 1:
            max = num2;
            break;
        case 0:
            break;
    }

    
    switch (num3 > max) {
        case 1:
            max = num3;
            break;
        case 0:
            break;
    }

    
    printf("The maximum number is: %d", max);

}
