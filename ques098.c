/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);   // Read full name

    int len = strlen(str);
    if (str[len - 1] == '\n') 
        str[len - 1] = '\0';  // Remove newline

    // Print First Initial
    if (str[0] != ' ')
        printf("%c.", str[0]);

    // Find initials for middle names and locate surname start
    int surnameStart = 0;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            // Mark surname start at last space
            surnameStart = i + 1;

            // Print middle name initial only if not last word
            // (we will print surname later)
            if (strchr(str + i + 1, ' ') != NULL) {
                printf("%c.", str[i+1]);
            }
        }
    }

    // Print surname
    printf(" %s", str + surnameStart);

    return 0;
}
