#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("The product of even numbers from 1 to %d is: %llu\n", n, product);

    return 0;
}
