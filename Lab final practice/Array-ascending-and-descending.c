#include<stdio.h>
int main()
{
    int temp,i,j,a[5];
    printf("Enter values : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The ascending order of values : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nThe descending order of values : ");
    for(i=4;i>=0;i--)
    {
     printf("%d\t",a[i]);
    }
}