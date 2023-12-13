//Write a program that read basic salary, incentive and house rent allowance and calculate their total salary.
//( total_salary=basic_salary+incentive+house_rent_allowance )

void main(){
    int basic, incentive, houserent, total;

    printf("-------: Total Salary Calculator :-------\n");
    printf("Enter Your Basic Salary: ");
    scanf("%d",&basic);

    printf("Enter Your Incentive Amount: ");
    scanf("%d",&incentive);

    printf("Enter Your Houese Rent Allowence: ");
    scanf("%d",&houserent);

    total=basic+incentive+houserent;

    printf("Your Total Salary Is: %d: ", total);
}