/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[200];
    scanf("%s", str);

    int freq[26] = {0};  // for 'a' to 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        if (freq[index] == 2) {   // first time we see a repeat
            printf("%c", str[i]);
            return 0;
        }
    }

    // If no repeating character
    printf("-1");

    return 0;
}
