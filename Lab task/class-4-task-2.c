#include<stdio.h>
int main()
{
    char ch;
    int a,b,sum,mul,sub,div;
    printf("Enter operator : ");
    scanf("%c",&ch);
    
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value to b:");
    scanf("%d",&b);
    
    switch(ch)
    {
        case '+' :
        sum=a+b;
        printf("The sum is :%d ",sum);
        break;
         case '-' :
         sub=a-b;
         printf("The sub is :%d",sub);
         break;

          case '*' :
          mul=a*b;

          printf("The mul is :%d",mul);
          break;
           case '/' :

           div=a/b;
           printf("The div is :%d",div);
           break;

           default :

           printf("No case");
            break;

            return 0;

        


    }
    
    

}