#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];
}

int main() {
    struct Student st[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter roll: ");
        scanf("%d", &st[i].roll);

        printf("Enter name: ");
        scanf("%s", st[i].name);

        printf("Enter marks: ");
        scanf("%f", &st[i].marks);

        puts("");
    }

    struct Student topper = findTop(st, 5);

    puts("Top student:");
    printf("Roll: %d", topper.roll);
    puts("");
    printf("Name: %s", topper.name);
    puts("");
    printf("Marks: %.2f", topper.marks);
    puts("");

    return 0;
}
