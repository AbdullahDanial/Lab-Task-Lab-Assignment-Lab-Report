

//array declaration,initialization
/*#include<stdio.h>
int main()
{
    int num[5];//datatype array_name [array size]1D array for 1 bracket
    num[0]=10;//index starts from zero
    num[1]=20;
    num[2]=30;
    num[3]=40;
    num[4]=50;
    printf("%d\n",num[2]);
    printf("%d\n",num[4]);


} */


//Write a program in C to store elements in an array and print it
#include<stdio.h>
int main()
{
    int i,a[5]={2,5,4,8,9};

    for(i=0;i<5;i++)

    {
        printf("%d\t",a[i]);
    }


}