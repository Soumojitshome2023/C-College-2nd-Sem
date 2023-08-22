#include <stdio.h>

// 9. Write a C program to check whether a string is palindrome or not (using single string only)

int main() {
    char str[100];
    int i, length = 0, flag = 0;
    
    printf("Enter a string: ");
    gets(str); 

    while(str[length] != '\0') {
        length++;
    }
    
    
    for(i=0; i<length/2; i++) {
        if(str[i] != str[length-i-2]) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) {
        printf("%s is a palindrome", str);
    }
    else {
        printf("%s is not a palindrome", str);
    }
    
    return 0;
}
