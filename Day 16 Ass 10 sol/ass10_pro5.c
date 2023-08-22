// 5.  Enter  the  marks  of  5  students  in  Chemistry,  Mathematics  and  Physics  (each  out  of  100)  usinga structure    named    Marks    having    elements    roll    no.,    name,    chem_marks,    maths_marks andphy_marks and then display the percentage of each student


#include <stdio.h>

// Define the structure for marks
struct Marks {
    int rollNo;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

// Function to calculate percentage
float calculatePercentage(int totalMarks, int obtainedMarks) {
    return (float)(obtainedMarks * 100) / totalMarks;
}

int main() {
    struct Marks students[5];
    int totalMarks = 100; // Total marks for each subject

    // Input marks for 5 students
    printf("Enter marks for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);

        printf("Enter Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);

        printf("Enter Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
    }

    // Calculate and display percentage for each student
    printf("\nPercentage of Each Student:\n");
    for (int i = 0; i < 5; i++) {
        float chem_percentage = calculatePercentage(totalMarks, students[i].chem_marks);
        float maths_percentage = calculatePercentage(totalMarks, students[i].maths_marks);
        float phy_percentage = calculatePercentage(totalMarks, students[i].phy_marks);
        float overall_percentage = (chem_percentage + maths_percentage + phy_percentage) / 3.0;

        printf("\nStudent %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Percentage: %.2f%%\n", chem_percentage);
        printf("Mathematics Percentage: %.2f%%\n", maths_percentage);
        printf("Physics Percentage: %.2f%%\n", phy_percentage);
        printf("Overall Percentage: %.2f%%\n", overall_percentage);
    }

    return 0;
}
