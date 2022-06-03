#include<stdio.h>
int main()
{
float x1,y1,x2,y2,x3,y3,m,n;//If slopes of both these points are equal, then all these 3 points lie on same straight line
printf("Enter points x1,y1 =\n");
scanf("%f%f",&x1,&y1);
printf("Enter points x2,y2 =\n");
scanf("%f%f",&x2,&y2);
printf("Enter points x3,y3 =\n");
scanf("%f%f",&x3,&y3);
m=(y2-y1)/(x2-x1);//m=slope
n=(y3-y2)/(x3-x2);//n=slope 2
if(m==n)
{
    printf("All the three points fall on same line");
}
else
{
    printf("All 3 points do not lie on the same line");
}



}