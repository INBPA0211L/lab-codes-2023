#include <stdio.h>
#include <stdlib.h>

int which_day(int year, int month, int day)
{
    int result = day;
    switch (month)
    {
    case 12:
        result += 30; // 11
    case 11:
        result += 31; // 10
    case 10:
        result += 30; // 09
    case 9:
        result += 31; // 08
    case 8:
        result += 31; // 07
    case 7:
        result += 30; // 06
    case 6:
        result += 31; // 05
    case 5:
        result += 30; // 04
    case 4:
        result += 31; // 03
    case 3:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            result += 29; // a leap year
        }
        else
        {
            result += 28; // not a leap year
        }
    case 2:
        result += 31; // 01
    }

    return result;
}

int next_arrival(int year, int month, int day)
{
    int today = which_day(year, month, day);
    if (month == 12 && day > 6)
    {
        int santa = which_day(year + 1, 12, 6);
        return santa + 31 - day;
    }
    else
    {
        int santa = which_day(year, 12, 6);
        return santa - today;
    }
}

/*
int main()
{
    int year, month, day;
    int next_arrival(int, int, int);
    while (scanf("%d %d %d", &year, &month, &day) != EOF)
    {
        int res = next_arrival(year, month, day);
        printf("%d\n", res);
    }
    return EXIT_SUCCESS;
}
*/