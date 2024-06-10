#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>



typedef struct student {
    char name[10];
    int id; 
}Student;


typedef struct course {
    char course_name[10];
    double average_grade;
    Student* enrolled_students;
}Course;


typedef struct school {
    Course* courses;
    char school_name[20];
}School;


void create_student(Student* array) {
    int i; 
    for(i = 0; i < sizeof(array)/sizeof(Student); i++) {
        
    }
}
