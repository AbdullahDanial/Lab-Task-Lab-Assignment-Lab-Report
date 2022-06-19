//Write a program in C to find the maximum and minimum element in an array

#include<stdio.h>
int main()
{
    int i,a[5];
    printf("Enter elements : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    int min=a[0];
    int max=a[0];


    for(i=0;i<5;i++)
    {
     if(min>a[i])
     {
        min=a[i];
     }
     if(max<a[i])
     {
        max=a[i];
     }
     
    }
    printf("The minimum element : %d\t",min);
    printf("\nThe maximum element : %d\t",max);

}