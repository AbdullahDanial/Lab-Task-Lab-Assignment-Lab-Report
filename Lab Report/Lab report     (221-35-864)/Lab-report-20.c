//Write a C program to determine whether a given number is prime or not

#include<stdio.h>

int main(){
    int number,count=0;

    printf("Enter a number:");
    scanf("%d",&number);
    
    for(int i=1;i<=number;i++){
        if(number%i == 0)
        {
            count++;
            
        }
    }
    if(count == 2)
    {
        printf("%d is a Prime number\n",number);
    }
    else
    {
        printf("%d is not a Prime number\n",number);
    }


    return 0;
}