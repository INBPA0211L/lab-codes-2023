#include <stdio.h>
#include <stdlib.h>

int which_day(int year, int month, int day) {
    int result = day;
    switch(month){
        case 12: result += 30; // november
        case 11: result += 31; // october
        case 10: result += 30; // september
        case 9: result += 31; // august
        case 8: result += 31; // july
        case 7: result += 30; // june
        case 6: result += 31; // may
        case 5: result += 30; // april
        case 4: result += 31; // march
        case 3:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                result += 29;
            } else {
                result += 28;
            }
        case 2:
            result += 31; // jan
    }
    return result;
}

int next_arrival(int year, int month, int day){
    int today = which_day(year, month, day);
    if(month == 12 && day > 6) {
        return which_day(year+1, 12, 6) + 31 - day;
    } else {
        return which_day(year, 12, 6) - today;
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