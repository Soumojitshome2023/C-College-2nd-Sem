#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 10. Write a C program to find the total number of alphabets, digits or special characters in a string

int main() {
    char str[100];
    int i, len, alphabets=0, digits=0, special=0;
    
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    
   
    for(i=0; i<len; i++) {
        if(isalpha(str[i])) {
            alphabets++;
        }
        else if(isdigit(str[i])) {
            digits++;
        }
        else {
            special++;
        }
    }
    
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special);
    
    return 0;
}
