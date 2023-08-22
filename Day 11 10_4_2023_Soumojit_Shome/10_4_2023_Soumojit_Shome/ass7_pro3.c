#include<stdio.h>
#include<string.h>

int main(){
   // 3. Write a C program to concatenate two strings.
    char ch1[30],ch2[30];
    int len =0,i=0,j=0;
    
    printf("Enter string 1 : ");
    gets(ch1);
    
    printf("Enter string 2 : ");
    gets(ch2);
    
    while(ch1[i]!='\0'){
        len++;
        i++;
    }
    
    while(ch2[j]!='\0'){
        ch1[i]=ch2[j];
        i++;
        j++;
    }
      ch1[i] = '\0';
     printf("New string is : ");
     puts(ch1);

    return 0;

}
