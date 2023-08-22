#include <stdio.h>

// 7. Write a C program to convert lowercase string to uppercase string and vice versa.

int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    gets(str); 

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string: %s", str);
    
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("\nLowercase string: %s", str);
    
    return 0;
}
