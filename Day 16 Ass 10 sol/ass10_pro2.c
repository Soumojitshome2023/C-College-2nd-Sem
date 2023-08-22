// 2. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2

#include <stdio.h>

// Define the structure for student
struct Student {
    int rollNo;
    char name[50];
    int age;
};

int main() {
    struct Student students[5];

    // Input student details
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        students[i].rollNo = i + 1;

        printf("\nStudent %d\n", students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
    }

    // Print details of student with roll number 2
    printf("\nDetails of student with roll number 2:\n");
    printf("Roll Number: %d\n", students[1].rollNo);
    printf("Name: %s\n", students[1].name);
    printf("Age: %d\n", students[1].age);

    return 0;
}
