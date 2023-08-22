#include <stdio.h>
#include <string.h>

// 2. Write a C program to count the total number of vowels and consonants in a string.

int main() {
    char string[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            vowels++;
        } else if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
