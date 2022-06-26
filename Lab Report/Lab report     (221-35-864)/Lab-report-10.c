//Write a program in C to sort elements of array in ascending order.


#include<stdio.h>
int main()
{
    int n[10],i,j,temp;
    printf("Enter elements : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(n[i]>n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    printf("Array(ascending) =");
    for(i=0;i<10;i++)
    {
        printf("%d\t",n[i]);
    }

}