/*Write a menu driven program which has the following options.
 I )Factorial
 ii) Prime or not
 iii) odd
 iv) Even
 v) Exit */

#include<stdio.h>
int main()
{
    int i,number,num,choice,fact=1,count=0;
    printf("\nchoices are below\n");
    printf("1:Factorial\t");
    printf("2:Prime number\t");
    printf("3:even/odd\t");
    printf("4:Exit\n");
    printf("Enter a choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter a number :");
        scanf("%d",&number);
        for(i=1;i<=number;i++)
        {
            fact=fact*i;
        }
        printf("Factorial of %d is : %d",number,fact);
        break;
        
        case 2:
        printf("Enter a number : ");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
             count++;
             
            }
        }
        if(count==2)
        {
            printf("prime number ");
        }
        else
        {
            printf("Not prime number");
        }
        break;

        case 3:

        printf("Enter any number :");
        scanf("%d",&number);
        if(number%2==0)
        {
            printf("The number is even");

        }
        else{
            printf("THe number is odd");
        }
        break;

        default:
        
        printf(" No case ");




    }

}