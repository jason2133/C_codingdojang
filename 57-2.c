#include <stdio.h>

typedef enum _DayOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    DayOfWeekCount
} DayOfWeek;

int main()
{
    for (DayOfWeek i = Sunday; i < DayOfWeekCount; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

