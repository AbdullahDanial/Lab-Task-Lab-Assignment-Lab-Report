/*Enter a six digit number and print the number in reverse order and find the sum of those 
number*/

#include<stdio.h>
int main()
{
    int i,num,sum=0,remain,add=0;
    printf("Enter six digit number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        remain=num%10;
        add=add+remain;

        sum=sum*10+remain;
        num=num/10;
       

    }
    num++;
    printf("The reverse order is :%d\n",sum);
    printf("The sum of those numbers are :%d",add);

}