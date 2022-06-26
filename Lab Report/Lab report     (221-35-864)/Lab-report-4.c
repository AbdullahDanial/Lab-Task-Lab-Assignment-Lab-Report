//Write a program in C to copy the elements of one array into another array

#include<stdio.h>
int main()
{

    int i,arr1[100],arr2[100],n;
    printf("Enter how many elements you need = ");
    scanf("%d",&n);

    printf("Enter elements = \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];

    }


    printf("The elements of arr1 = \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nThe elements of arr2 = \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
}   