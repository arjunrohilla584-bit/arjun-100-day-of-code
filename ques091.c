/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[200], result[200];
    scanf("%s", str);

    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            continue;  // skip vowels
        }

        result[j++] = ch;
    }

    result[j] = '\0';  // end string

    printf("%s", result);

    return 0;
}
