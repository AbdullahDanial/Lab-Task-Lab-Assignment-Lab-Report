#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("enter the range from 1 to : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        

        if(i%2==0)
        {
           sum=sum+i;

            printf("%d\n",i);
            
            
           
            
        }
         
    }
    printf("The sum is : %d\n",sum);
}