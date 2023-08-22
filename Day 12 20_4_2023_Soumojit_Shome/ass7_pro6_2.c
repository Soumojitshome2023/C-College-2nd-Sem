#include <stdio.h>

// 6. Write a C program to count the frequency of each character in a string.

int main() {
    char str[100];
    int i, j, len, counter;
    
    printf("Enter a string: ");
    gets(str); 
    
    len = 0;
    while(str[len] != '\0') {
        len++;
    }
    
    for(i=0; i<len; i++) {
        if(str[i] != '\0') {
            counter = 1;
            for(j=i+1; j<len; j++) {
                if(str[i] == str[j]) {
                    counter++;
                    str[j] = '\0';
                }
            }
            printf("%c appears %d times.\n", str[i], counter);
        }
    }
    
    return 0;
}
