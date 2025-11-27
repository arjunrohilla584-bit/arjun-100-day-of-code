#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:", i + 1);
        puts("");

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        puts("");
    }

    puts("Student Details:");
    for (i = 0; i < 5; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f", s[i].roll, s[i].name, s[i].marks);
        puts("");
    }

    return 0;
}
