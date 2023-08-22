#include<stdio.h>

int main(){
    //1. Write a C program to find the length of a string.
    char ch[30];
    int len =0,i=0;
    
    printf("Enter string : ");
    scanf("%s",ch);
    
    while(ch[i]!='\0'){
        len++;
        i++;
    }
    
    printf("Length is %d\n",len);

    return 0;

}
