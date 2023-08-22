// 1.  Write  a  program  to  store  and  print  the  roll  no.,  name,  age  and  marks  of  a  student usingstructures

#include <stdio.h>

// Define the structure for student
struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Age: ");
    scanf("%d", &student.age);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    // Print student details
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
