// w a p that read three numbers and print maximum, minimum and middle out of them using if statements.

void main(){
        int num1, num2, num3, min, max, middle;
        printf("Enter three numbers(Seprated by space): ");
        scanf("%d %d %d",&num1,&num2,&num3);

       min=num1;
       max=num1;
       middle=num1;

        if(num2>max){
            max=num2;
        }

        if(num3>max){
            max=num3;
        }

        if(num2<min){
            min=num2;
        }

        if(num3<min){
            min=num3;
        }

       if(num1>num2&&num1<num3 || num1>num3&&num1<num2){
             middle=num1;
        }

        if(num2>num1&&num2<num3 || num2>num3&&num2<num1){
             middle=num2;
        }

        if(num3>num1&&num3<num2 || num3>num2&&num3<num1){
             middle=num3;
        }

        printf("Max is %d\n",max);
        printf("Min is %d\n",min);
        printf("Middle is %d",middle);

}