#include<stdio.h>
int main()
{
    char name[20];
    double total_sale,fixed_salary,total_salary;
    scanf("%s",&name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&total_sale);
    total_salary=fixed_salary+(total_sale*0.15);
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;


}