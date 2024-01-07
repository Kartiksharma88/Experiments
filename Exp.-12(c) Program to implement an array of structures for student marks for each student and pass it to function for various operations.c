//Program to implement an array of structures for student marks for each
//student and pass it to function for various operations
#include <stdio.h>

#define MAX_STUDENTS 100

// Structure to store student marks
struct Student {
    char name[50];
    int marks;
};

// Function to display student marks
void displayStudentMarks(struct Student students[], int numStudents) {
    printf("Student Marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Pass array of structures to function
    displayStudentMarks(students, numStudents);

    return 0;
}
