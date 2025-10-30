#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        printf("No fine. Book returned on time.\n");
    } else if (daysLate <= 5) {
        fine = daysLate * 2;
        printf("Fine = ₹%d\n", fine);
    } else if (daysLate <= 10) {
        fine = 5 * 2 + (daysLate - 5) * 4;
        printf("Fine = ₹%d\n", fine);
    } else if (daysLate <= 30) {
        fine = 5 * 2 + 5 * 4 + (daysLate - 10) * 6;
        printf("Fine = ₹%d\n", fine);
    } else {
        printf("Membership Cancelled due to more than 30 days late.\n");
    }

    return 0;
}
