#include<stdio.h>
int main()
{
    int n,last_digit,sum;
    printf("enter the number :");
    scanf("%d",&n);
    last_digit=n%10;
    while(n>=10)
    {
    n=n/10;
    }
    sum=n+last_digit;
    printf("The sum is : %d",sum);
}