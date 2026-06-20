#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "student.h"

void saveToFile(
    Student *root,
    const char *filename);
Student loadFromFile(
    const char *filename);

#endif