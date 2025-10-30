
#include <stdio.h>

int main() {
    int n, num, digit, sum = 0, factorial, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (num != 0) {
        digit = num % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        num /= 10;
    }

    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}
