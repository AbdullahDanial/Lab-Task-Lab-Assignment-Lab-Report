#include<stdio.h>
int main()
{
    float cost_price,selling_price,profit,loss;
    printf("Enter cost price : ");
    scanf("%f",&cost_price);
    printf("Enter selling price : ");
    scanf("%f",&selling_price);

    if(selling_price>cost_price)
    {
        printf("the seller has made profit\n");
        profit=selling_price-cost_price;
        printf("Profit = %.3f",profit);
    }
    else 
    {
        printf("the seller has made incurred loss\n");
        loss=cost_price-selling_price;
        printf("Loss = %.3f",loss);

    }
    
    


}