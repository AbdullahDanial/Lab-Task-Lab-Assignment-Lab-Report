//Write a program in C to find the sum of all elements of the array


#include<stdio.h>

int main(){
    int array[5]={2,6,4,8,5};
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum=sum+array[i];
    }
    printf("sum=%d",sum);

    return 0;
}