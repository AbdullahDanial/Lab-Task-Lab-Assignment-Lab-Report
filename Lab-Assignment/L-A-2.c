#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("enter any 10 numbers : \n");
    
    for(i=1;i<=10;i++)
    {
    scanf("%d",&n);
    sum=sum+n;
    }
    avg=sum/10.00;
    printf("sum is : %d\n",sum);
    printf("Avg is : %f",avg);

}