#include <stdio.h>
#include <math.h>

int main() {
    int n, num, firstDigit, lastDigit, digits = 0, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    lastDigit = num % 10;

    while (num != 0) {
        digits++;
        num /= 10;
    }

    firstDigit = n / pow(10, digits - 1);
    swapped = lastDigit * pow(10, digits - 1) + (n % (int)pow(10, digits - 1) - lastDigit) + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
