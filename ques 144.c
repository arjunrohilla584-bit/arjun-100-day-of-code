#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};


    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    printf("Enter roll: ");
    scanf("%d", &st.roll);

    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    printf("\nStudent details:\n");
    display(st);

    return 0;
}
