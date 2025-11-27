#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter Name: ");
    scanf("%s", e1.name);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        puts("Error opening file.");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        puts("Error opening file.");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    puts("");
    puts("Employee data read from file:");
    printf("ID: %d", e2.id);
    puts("");
    printf("Name: %s", e2.name);
    puts("");
    printf("Salary: %.2f", e2.salary);
    puts("");

    return 0;
}
