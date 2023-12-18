#include <stdio.h>

void leap (int year, int *days);

int main()
{
    int year;
    scanf("%d", &year);

    int days = 215;

    leap (year, &days);

    int days_left = 256 - days;

    printf("%d.09.%d", days_left, year);

}

void leap (int year, int *days) {

    // Julian Calendar
    if (year >= 1700 && year <= 1917) {
        if (year % 4 == 0) {
            *days = *days + 29;
        } else {
            *days = *days + 28;
        }
    }

    // Gregorian Calendar
    // This is exception case of Gregorian Calendar
    if (year == 1918) {
        *days = *days + 28 - 13;
    }

    if (year >= 1919) {
        if (year % 400 == 0) {
            *days = *days + 29;
        } else {
            if (year % 4 == 0) {
                if (year % 100 != 0) {
                    *days = *days + 29;
                } else {
                    *days = *days + 28;
                }
            } else {
                *days = *days + 28;
            }
        }
    }
}
