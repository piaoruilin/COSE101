//Input 2 dates and output the earlier one. If both are the same, output a * next to the date.

#include <stdio.h>

int main()
{
    int year, month, day, year1, month1, day1;
    scanf("%04d/%02d/%02d", &year, &month, &day);
    scanf("%04d/%02d/%02d", &year1, &month1, &day1);
    
    if (year1>year) printf("%04d/%02d/%02d", year, month, day);
    else if (year1>year && month1>month) printf("%04d/%02d/%02d", year, month, day);
    else if (year1>year && month1>month && day1>day) printf("%04d/%02d/%02d", year, month, day);
    else if (year1==year && month1==month && day1==day) printf("%04d/%02d/%02d%s", year, month, day, "*");
    else printf("%04d/%02d/%02d", year1, month1, day1);
    
//please work i beg u

    return 0;
}