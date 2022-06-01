#include<stdio.h>
int main()
{
    double total_illiterate_men,total_literate_women, woman_population,total_illiteracy,total_illiterate_women,man_population,total_population=80000,percentage_of_men,percentage_of_women,total_literacy,total_literate_men;
    man_population=total_population*0.52;
    total_literacy=total_population*0.48;
    total_literate_men=total_population*0.35;
    woman_population=total_population-man_population;
    total_illiterate_men=man_population-total_literate_men;
    total_illiterate_women=woman_population-(total_literacy-total_literate_men);
    printf("the total number of illiterate men = %.3lf\nthe total number of illiterate women = %.3lf",total_illiterate_men,total_illiterate_women);


}