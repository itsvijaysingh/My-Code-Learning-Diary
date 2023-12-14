// W a p that read a salary and if it is less than 4000 then print peon otherwise if it is less than 7000
// then print clerk otherwise if it is less than 10000 then print manager otherwise print director.

int main(){
    int salary;
    printf("Enter an salary amount: ");
    scanf("%d",&salary);

    if(salary<4000){
        printf("Peon");
    }else if(salary<7000){
        printf("Clerk");
    }else if(salary<10000){
        printf("Manager");
    }else{
        printf("Director");
    }
}