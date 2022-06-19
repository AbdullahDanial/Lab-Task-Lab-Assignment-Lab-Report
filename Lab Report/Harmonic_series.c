//Write a program in C to display the n terms of harmonic series and their sum.

#include<stdio.h>
int main()
{

 float n,i,sum;
 printf("1+1/2+.....+1/");
 scanf("%f",&n);
 for(i=1;i<=n;i++)
 {

     sum=sum+(1/i);
 }
 printf("\nsum:\t1+1/2+......+1/%.0f = %.3f",n,sum);
}
