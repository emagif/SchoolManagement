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


Student* createStudent() {
    Student* newStudent = (Student*)malloc(sizeof(Student));

    printf("Enter student name: \n");
    scanf("%s", (*newStudent).name);

    printf("Enter student ID: \n");
    scanf("%u", (*newStudent).id);

    return newStudent;
}



int main() {

}