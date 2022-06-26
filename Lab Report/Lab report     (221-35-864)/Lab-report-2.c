//. Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
int main()
{
    int i,a[100],n;
    printf("Enter how many elements you need = ");
    scanf("%d",&n);

    printf("Enter elements = \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Reverse order = ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}