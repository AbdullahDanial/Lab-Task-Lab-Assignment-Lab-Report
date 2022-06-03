#include<stdio.h>
int main()
{
    int X;
    float Y;
    scanf("%d",&X);
    scanf("%f",&Y);
    float average_consumption=X/Y;
    printf("%.3f km/l",average_consumption);
}