// 7. Define a union with the following three members: roll no, name and total marks of student.Write a c program to read and display the details of a student.

#include <stdio.h>

// Define the union for student details
union StudentDetails
{
    int rollNo;
    char name[50];
    float totalMarks;
};

int main()
{
    union StudentDetails student;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Total Marks: ");
    scanf("%f", &student.totalMarks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", student.totalMarks);

    return 0;
}
