#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 7. Write a C program to convert lowercase string to uppercase string and vice versa.

int main() {
    char str[100];
    int i, len;
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str);
    
    for(i=0; i<len; i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]); 
        }
        else if(isupper(str[i])) {
            str[i] = tolower(str[i]); 
        }
    }
    
    printf("Converted string: %s", str);
    
    return 0;
}
