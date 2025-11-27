Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    fgets(str, sizeof(str), stdin);   // read full line including spaces

    int newWord = 1;   // flag indicating start of a new word

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;   // next character begins a word
        } else {
            if (newWord && isalpha(str[i])) {
                str[i] = toupper(str[i]);   // capitalize first letter
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);   // rest are lowercase
            }
        }
    }

    printf("%s", str);
    return 0;
}
