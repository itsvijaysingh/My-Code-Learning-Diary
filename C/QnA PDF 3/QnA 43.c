// W a p that read a number and if it is greater than 100 then print ajmer and if it is greater than 200 then print jaipur otherwise print jaisalmer and if it is greater than 500 then print delhi.

int main(){
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    if(num>100){
        printf("Ajmer");
    }else if(num>200){
        printf("JAIPUR");
    }else if(num>500){
        printf("Delhi");
    }else{
        printf("jaislaimer");

    }


}