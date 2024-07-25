#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


typedef struct student {
    char name[20];
    unsigned int id;
} Student;

typedef struct course {
    char name[20];
    double averageGrade;
    unsigned int totalStudents;
    Student *studentArray;
} Course;

typedef struct school {
    char name[20];
    unsigned int totalCourses;
    Course *courseArray;
} School;