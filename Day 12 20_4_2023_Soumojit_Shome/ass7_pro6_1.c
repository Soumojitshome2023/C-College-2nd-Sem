#include <stdio.h>
#include <string.h>

// 6. Write a C program to count the frequency of each character in a string.

int main() {
    char str[100];
    int i, j, len, freq;
    
    printf("Enter a string: ");
    gets(str); 
    
    len = strlen(str);
    
    for(i=0; i<len; i++) {
        freq = 1; 
        for(j=i+1; j<len; j++) {
            if(str[i] == str[j] && str[i] != ' ') {
                freq++;
                str[j] = '\0'; 
            }
        }
        
        if(str[i] != ' ' && str[i] != '\0') {
            printf("%c - %d\n", str[i], freq);
        }
    }
    
    return 0;
}
