#include <stdio.h>
#include <stdlib.h>

int get_1st_weekDay(int year)
{
    int d;
    d = (((year-1)*365) + ((year-1)/ 4) - ((year-1)/ 100) + ((year)/ 400) + 1) % 7;
    return d;
}

int main()
{
    system("Color 3F");
    int year, month, day, daysInMonth, weekDay=0, startingDay;

    printf("Enter Your Desired Year : ");
    scanf("%d", &year);

    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    int months_Day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((year%4==0 && year%100!=0) || year%400==0)
        months_Day[1] = 29;

    startingDay = get_1st_weekDay(year);

    for(month = 0; month<12; month++)
    {
        daysInMonth = months_Day[month];
        printf("\n\n--------------%s-------------\n\n", months[month]);
        printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");

        for(weekDay = 0; weekDay<startingDay; weekDay++)
        {
            printf("     ");
        }

        for(day=1; day<=daysInMonth; day++)
        {
            printf("%5d", day);

            if(++weekDay>=7)
            {
                printf("\n\n");
                weekDay = 0;
            }
            startingDay = weekDay;
        }
    }




    return 0;
}
