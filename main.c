#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main() {
    int choice;
    Student students[50];
    int studentCount = 0;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                displayStudents(students, studentCount);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}


