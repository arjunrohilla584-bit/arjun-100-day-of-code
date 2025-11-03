#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}
