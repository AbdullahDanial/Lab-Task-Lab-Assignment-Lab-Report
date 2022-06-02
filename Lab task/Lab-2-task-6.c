#include<stdio.h>
int main()
{
    float a,b,c; 
    printf("Type three angles of triangle :");
    scanf("%f %f %f",&a,&b,&c);
    float sum=a+b+c; 
    if(sum==180.00)
    {
        printf("The triangle is valid");

    }
    else
    {
        printf("the triangle is not valid");
    }
}