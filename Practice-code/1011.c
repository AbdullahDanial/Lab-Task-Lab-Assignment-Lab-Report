#include<stdio.h>
int main()
{
    double volume,R,pi;
    scanf("%lf",&R);
    pi=3.14159;
    volume=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;


}