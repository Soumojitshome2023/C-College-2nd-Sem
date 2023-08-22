#include <stdio.h>
#include <string.h>

// 9. Write a C program to check whether a string is palindrome or not (using single string only)

int main() {
    char str[100];
    int i, len, flag=0;
    
    printf("Enter a string: ");
    gets(str); 
    
    len = strlen(str);
    
    
    for(i=0; i<len/2; i++) {
        if(str[i] != str[len-i-2]) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) {
        printf("%s is not a palindrome.\n", str);
    }
    else {
        printf("%s is a palindrome.\n", str);
    }
    
    return 0;
}
