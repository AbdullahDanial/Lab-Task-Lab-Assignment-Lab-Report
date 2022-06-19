// Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
int main()
{
    int i,n[100],a;
    printf("Enter How many elements you want = ");
    scanf("%d",&a);
    printf("Enter elements = \n");


    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Reverse elements are = ");
    for(i=a-1;i>=0;i--)
    {
        printf("%d",n[i]);
    }
}
