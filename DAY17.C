#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
