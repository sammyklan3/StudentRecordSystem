#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student *createStudent(int id, const char *name, const char *course, float marks)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newStudent->id = id;
    strncpy(newStudent->name, name, sizeof(newStudent->name) - 1);
    newStudent->name[sizeof(newStudent->name) - 1] = '\0'; // Ensure null-termination
    strncpy(newStudent->course, course, sizeof(newStudent->course) - 1);
    newStudent->course[sizeof(newStudent->course) - 1] = '\0'; // Ensure null-termination
    newStudent->marks = marks;
    newStudent->left = NULL;
    newStudent->right = NULL;

    return newStudent;
}