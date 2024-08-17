#include <stdio.h>
#include <time.h>

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int hour = (tm.tm_hour < 10) ? tm.tm_hour + 12 : tm.tm_hour;
    const char *am_pm = (tm.tm_hour < 12) ? "AM" : "PM";
    printf("Date & Time\n");
    printf("Date: %02d-%02d-%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Time: %02d:%02d:%02d %s\n", hour, tm.tm_min, tm.tm_sec, am_pm);
    return 0;
}