#include <stdio.h>

// 10. Write a C program to find the total number of alphabets, digits or special characters in a string

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, special_chars = 0;
    
    printf("Enter a string: ");
    gets(str); 

    for(i=0; str[i]!='\0'; i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9') {
            digits++;
        }
        else {
            special_chars++;
        }
    }
    
   
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special_chars);
    
    return 0;
}
