// 3. Write a program to store and print the roll no., name, age, address and marks of 15 studentsusing structure.


#include <stdio.h>

// Define the structure for student
struct Student {
    int rollNo;
    char name[50];
    int age;
    char address[100];
    float marks;
};

int main() {
    struct Student students[15];

    // Input student details
    printf("Enter details of 15 students:\n");
    for (int i = 0; i < 15; i++) {
        printf("\nStudent %d\n", i + 1);
        
        students[i].rollNo = i + 1;

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Address: ");
        scanf("%s", students[i].address);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < 15; i++) {
        printf("\nStudent %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
