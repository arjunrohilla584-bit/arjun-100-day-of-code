#include <stdio.h>

int main() {
    int n, i;
    int binary[32];
    int index = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    printf("Binary: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
