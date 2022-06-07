#include<stdio.h>
int main()
{
   int n,first=0,second=1,fibo,count;
   printf("enter the range :");
   scanf("%d",&n);
   for(count=0;count<n;count++)
   {
       if(count<=1)
       {
           fibo=count;
       }
       else
       {
           fibo=first+second;
           first=second;
           second=fibo;
       }
       

         printf("%d ",fibo);

   }
 



}