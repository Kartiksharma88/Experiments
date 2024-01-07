//Program for reading and writing the student marks data to files.
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void writeDataToFile(struct Student student) {
    FILE *file = fopen("student_data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "%s %d\n", student.name, student.marks);
    fclose(file);
}

void readDataFromFile() {
    FILE *file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    struct Student student;
    while (fscanf(file, "%s %d", student.name, &student.marks) != EOF) {
        printf("Name: %s, Marks: %d\n", student.name, student.marks);
    }

    fclose(file);
}

int main() {
    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter student marks: ");
    scanf("%d", &student.marks);

    writeDataToFile(student);

    printf("Data written to file.\n");

    printf("Reading data from file:\n");
    readDataFromFile();

    return 0;
}
