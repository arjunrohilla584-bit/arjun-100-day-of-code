Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%s", date);   // format: dd/04/yyyy

    char day[3], month[3], year[5];
    
    // Extract parts
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month "04" → "Apr"
    char monthName[10];

    if (strcmp(month, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(month, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(monthName, "Nov");
    else if (strcmp(month, "12") == 0) strcpy(monthName, "Dec");

    // Print final format
    printf("%s-%s-%s", day, monthName, year);

    return 0;
}
