#include<stdio.h>
int main()
{
    char a;
    printf("enter any character :");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("the character entered is a capital letter");
    }
    else if(a>=97 && a<=122)
    {
        printf("the character entered is small case letter");
    }
    else if(a>=48 && a<=57)
    {
        printf("the character entered is digit");

    }
    else 
    {
        printf("the character entered is special symbol");
    }



}