#include<stdio.h>
int main()
{
    float fahrenheit,centigrade;
    printf("enter the fahrenheit temp :");
    scanf("%f",&fahrenheit);
    centigrade=(5*fahrenheit-160)/9;
    printf("temp in centigrade :%.2f",centigrade);
}