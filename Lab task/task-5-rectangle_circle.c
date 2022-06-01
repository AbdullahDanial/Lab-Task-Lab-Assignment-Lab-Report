#include<stdio.h>
int main()
{
    float length,breadth,radius,area_of_rectangle,area_of_circle,perimeter,circumference,π=3.14;
    printf("The length & breadth of  rectangle = ");
    scanf("%f%f",&length,&breadth);
    printf("radius of  circle =");
    scanf("%f",&radius);
    area_of_rectangle=length*breadth;
    perimeter=2*(length+breadth);
    area_of_circle=π*radius*radius;
    circumference=2*π*radius;
    printf(" the area & perimeter of the rectangle :%.2f & %.2f\n",area_of_rectangle,perimeter);
    printf("the area & circumference of the circle : %.2f & %.2f",area_of_circle,circumference);



}