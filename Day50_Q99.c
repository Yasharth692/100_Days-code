#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    // extract day, month, and year using substring logic
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int m = atoi(month); // convert month to number

    if (m >= 1 && m <= 12)
        printf("Formatted Date: %s-%s-%s\n", day, monthName[m - 1], year);
    else
        printf("Invalid month!\n");

    return 0;
}
