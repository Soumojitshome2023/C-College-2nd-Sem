#include<stdio.h>
#include<string.h>
int main(){
    //1. Write a C program to find the length of a string.using gets
    char ch[30];
    int len =0,i=0;
    
    printf("Enter string : ");
    gets(ch);
    
    while(ch[i]!='\0'){
        len++;
        i++;
    }
    
    printf("Length is %d\n",len);

    return 0;

}
