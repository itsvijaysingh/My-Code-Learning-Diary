// W a p that read a number and if it is greater than or equal to 60 then print first division
// otherwise if it is greater than or equal to 45 then print second division otherwise if it is greater than or equal to 33 then print third division otherwise print fail (numbers allowed between 0 to 100).

int main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

if(num>=0&&num<=100){
    if(num>=60){
        printf("division");
    }else if(num>=45){
        printf("second division");
    }else if(num>=33){
        printf("third division");
    }else{
        printf("fail");
    }
}else{
    printf("numbers allowed between 0 to 100");
}

}