/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);   // read full sentence

    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
            currStart = i + 1;
        } else {
            currLen++;
        }

        if (str[i] == '\0') break;
    }

    // Print longest word
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
