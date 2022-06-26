//Write a program in C to display the n terms of odd natural number and their sum.


#include<stdio.h>

int main(){
    int n,sum=0;

    printf("How many terms: ");
    scanf("%d",&n);

    printf("%d terms of odd natural number: ",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        {
          sum=sum+i;
           printf("%d\t",i);
        }
       
        
    }
    printf("\nSum = %d",sum);
 

    return 0;
}