#include <stdio.h>
#include <string.h>

// 8. Write a C program to compare two strings

int main() {
    char str1[100], str2[100];
    int cmp;
    
    printf("Enter the first string: ");
    gets(str1); 
    
    printf("Enter the second string: ");
    gets(str2); 
    
    cmp = strcmp(str1, str2); 
    
    if(cmp == 0) {
        printf("The two strings are equal.\n");
    }
    else if(cmp < 0) {
        printf("The first string is less than the second string.\n");
    }
    else {
        printf("The first string is greater than the second string.\n");
    }
    
    return 0;
}
