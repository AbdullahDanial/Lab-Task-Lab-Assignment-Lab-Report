#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("enter five digit number =");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum*10+m;// this is the formula 
        n=n/10;
    }
    printf("The reverse number  = %d",sum);
}