/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    // Check length
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }

    char concat[200];
    strcpy(concat, s1);
    strcat(concat, s1);   // s1 + s1

    // Check if s2 is a substring of concat
    if (strstr(concat, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
