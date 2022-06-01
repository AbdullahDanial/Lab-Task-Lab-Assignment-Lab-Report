#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,aggregate_marks;
    float percentage;
    printf("enter the sub marks : ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    aggregate_marks=sub1+sub2+sub3+sub4+sub5;
    percentage=aggregate_marks*(100.00/500.00);
    printf("aggregate marks= %d\n percentage =%.2f",aggregate_marks,percentage);


}