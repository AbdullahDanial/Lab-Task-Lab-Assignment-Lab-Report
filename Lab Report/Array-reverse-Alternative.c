// Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
int main()
{
    int i,a[5],n;
    printf("Enter elements : \n");
     for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Reverse elements are : ");
     for(i=4;i>=0;i--)
     {
        printf("%d\t",a[i]);
     }
}