#include<stdio.h>
int main()
{
    int age_days,years,days2,months,days;
    scanf("%d",&age_days);
    years=age_days/365;
    days2=age_days%365;
    months=days2/30;
    days=days2%30;
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)",days);
    return 0;




}