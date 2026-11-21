#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT 3
#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    int age;
    float marks;
};

int main(void) {
    struct Student students[STUDENT_COUNT];
    char searchName[NAME_LENGTH];
    int i, found = 0;

    printf("=== Student Structure Manager ===\n");

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nEnter the name of the student to search: ");
    scanf(" %49[^\n]", searchName);

    for (i = 0; i < STUDENT_COUNT; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("\nStudent found!\n");
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found.\n");
    }

    return 0;
}
