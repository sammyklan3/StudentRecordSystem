#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student
{
    int id;
    char name[50];
    char course[50];
    float marks;

    struct Student *left;
    struct Student *right;
} Student;

#endif