#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Day: ");
    scanf("%d", &e.joinDate.day);

    printf("Enter Joining Month: ");
    scanf("%d", &e.joinDate.month);

    printf("Enter Joining Year: ");
    scanf("%d", &e.joinDate.year);

    puts("");
    puts("Employee Details:");
    printf("ID: %d", e.id);
    puts("");
    printf("Name: %s", e.name);
    puts("");
    printf("Salary: %.2f", e.salary);
    puts("");
    printf("Joining Date: %d-%d-%d", e.joinDate.day, e.joinDate.month, e.joinDate.year);
    puts("");

    return 0;
}
