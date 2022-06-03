#include<stdio.h>
int main()
{
    int code_of_a_product_1,number_of_units_of_product_1,code_of_a_product_2,number_of_units_of_product_2;
    float price_for_one_unit_of_product_1,price_for_one_unit_of_product_2,amount_to_be_paid;
    scanf("%d%d%f",&code_of_a_product_1,&number_of_units_of_product_1,&price_for_one_unit_of_product_1);
    scanf("%d%d%f",&code_of_a_product_2,&number_of_units_of_product_2,&price_for_one_unit_of_product_2);
    amount_to_be_paid=(number_of_units_of_product_1*price_for_one_unit_of_product_1)+(number_of_units_of_product_2*price_for_one_unit_of_product_2);
    printf("VALOR A PAGAR: R$ %.2f\n",amount_to_be_paid);
    return 0;
}

