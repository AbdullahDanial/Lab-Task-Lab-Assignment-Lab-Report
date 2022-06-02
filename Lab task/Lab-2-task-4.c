#include <stdio.h>
int main ()
{
    int n,reminder,sum=0,temporary;
    printf("enter the number :");
    scanf("%d",&n);
    temporary=n;
    while (n>0)
    {
        reminder=n%10;
        sum=sum*10+reminder;
        n=n/10;

    }
    if(temporary==sum)
    {
        printf("numbers are equal");
    }
    else 
    {
        printf("numbers are not equal");
    }
}