#include<stdio.h>
int main()
{
    float km,m,feet,inch,cm;
    printf("The distance between Mirpur and Ashulia :");
    scanf("%f",&km);
    m=km*1000;
    feet=km*3280.84;
    inch=km*39370.1;
    cm=km*100000;
    printf("distance in meter=%f\n distance in feet =%lf\n distance in inch= %lf\n distance in cm=%lf",m,feet,inch,cm);
    
}