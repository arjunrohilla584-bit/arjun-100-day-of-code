#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;

    puts("Enter details for Student 1");
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    puts("");

    puts("Enter details for Student 2");
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    puts("");

    if (s1.roll == s2.roll && s1.marks == s2.marks) {
        int i = 0, same = 1;
        while (s1.name[i] != 0 && s2.name[i] != 0) {
            if (s1.name[i] != s2.name[i]) {
                same = 0;
                break;
            }
            i++;
        }
        if (same && s1.name[i] == s2.name[i]) {
            puts("Both structures are identical");
        } else {
            puts("Structures are not identical");
        }
    } else {
        puts("Structures are not identical");
    }

    return 0;
}
