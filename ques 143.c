#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

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

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    puts("Student with highest marks:");
    printf("Roll: %d, Name: %s, Marks: %.2f", s[maxIndex].roll, s[maxIndex].name, s[maxIndex].marks);
    puts("");

    return 0;
}
