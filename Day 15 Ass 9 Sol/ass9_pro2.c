// 2. Write a C Program to swap two given numbers using call by reference.

#include <stdio.h>a

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
