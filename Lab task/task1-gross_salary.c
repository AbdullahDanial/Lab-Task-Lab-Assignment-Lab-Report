#include<stdio.h>
int main()
{
    double basic_salary,allowance,house_rent,gross_salary;
    printf("enter the basic salary : ");
    scanf("%lf",&basic_salary);
    allowance=0.4*basic_salary;
    house_rent=0.2*basic_salary;
    gross_salary=basic_salary-allowance-house_rent;
    printf("Gross salary :%.3lf",gross_salary);
}
