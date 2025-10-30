#include <stdio.h>

int main() {
    long binary, temp;
    int remainder, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    temp = binary;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder == 0) {
            remainder = 1;
        } else if (remainder == 1) {
            remainder = 0;
        } else {
            printf("Invalid binary number.\n");
            return 0;
        }
        onesComplement += remainder * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's complement: %d\n", onesComplement);

    return 0;
}
