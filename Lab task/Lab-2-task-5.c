#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Age of arif :");
    scanf("%d",&a);
    printf("Age of fahmid :");
    scanf("%d",&b);
    printf("Age of joy :");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("Arif is the youngest");
    }
    else if(b<a && b<c)
    {
        printf("Fahmid is the youngest");
    }
    else
    {
        printf("Joy is the youngest");
    }


}