// 1. Write a C Program using pointer to find the bigger of two given numbers.

#include <stdio.h>

int findLarger(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int larger = findLarger(&num1, &num2);
    printf("The larger number is: %d\n", larger);
    
    return 0;
}
