#ifndef BST_H
#define BST_H

#include "student.h"

Student *insertStudent(
    Student *root,
    Student *newStudent);

Student *searchStudent(
    Student *root,
    int id);

Student *deleteStudent(
    Student *root,
    int id);

void inOrderTraversal(
    Student *root);

#endif