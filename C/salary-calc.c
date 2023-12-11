void main() {
    int basic_salary, hra, da, bonus, gross_salary, pf, tax, total_cuts, net_salary;
    clrscr();
    printf("---: Salary Calculator :---\n");
    printf("Please Enter Your Basic Salary:");
    scanf("%d", &basic_salary);

    hra = (basic_salary * 10) / 100;
    da = (basic_salary * 10) / 100;
    bonus = 200;
    gross_salary = basic_salary + hra + da + bonus;

    pf = (gross_salary * 12.5) / 100;
    tax = (gross_salary * 12) / 100;
    total_cuts = pf + tax;
    net_salary = gross_salary - total_cuts;

    printf("Your HRA: %d\n", hra);
    printf("Your DA:vi %d\n", da);
    printf("Your Bonuses: %d\n\n", bonus);

    printf("Your Total Cuts: %d (Tax: %d + PF: %d)\n", total_cuts, tax, pf);

    printf("Your Gross Salary: %d\n", gross_salary);
    printf("Your Net Salary: %d\n", net_salary);
    getch();
}
