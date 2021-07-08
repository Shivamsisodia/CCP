#include <stdio.h>
    

#define MAX_SIZE 100

struct Student {
    char name[MAX_SIZE];
    char roll_no[MAX_SIZE];
    char department[MAX_SIZE];
    int fees;
    int marks;
} student1, student2;

int main() {



    printf("Enter details for Student 1:\n");
    printf("name: ");
    fgets(student1.name, MAX_SIZE, stdin);
    printf("roll number: ");
    fgets(student1.roll_no, MAX_SIZE, stdin);
    printf("department: ");
    fgets(student1.department, MAX_SIZE, stdin);
    printf("fees: ");
    scanf("%d", &student1.fees);
    printf("marks: ");
    scanf("%d", &student1.marks);

    getchar(); 

    printf("Enter details for Student 2:\n");
    printf("name: ");
    fgets(student2.name, MAX_SIZE, stdin);
    printf("roll number: ");
    fgets(student2.roll_no, MAX_SIZE, stdin);
    printf("department: ");
    fgets(student2.department, MAX_SIZE, stdin);
    printf("fees: ");
    scanf("%d", &student2.fees);
    printf("marks: ");
    scanf("%d", &student2.marks);

    struct Student best_student;

    if (student1.marks > student2.marks) {
        printf("\nstudent 1 has scored higher marks.\n");
        best_student = student1;
    }
    else {
        printf("\nstudent 2 has scored higher marks.\n");
        best_student = student2;
    }

    printf(
        "name: %s\n"
        "roll number: %s\n"
        "department: %s\n"
        "fees: %d\n"
        "marks: %d\n"
        ,
        best_student.name,
        best_student.roll_no,
        best_student.department,
        best_student.fees,
        best_student.marks
    );

    return 0;
}
