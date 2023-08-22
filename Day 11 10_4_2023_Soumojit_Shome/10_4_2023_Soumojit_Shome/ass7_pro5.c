#include<stdio.h>
#include<string.h>

int main(){
   // 5. Write a C program to remove all extra blank spaces from a given string.
    char ch[30];
    int len =0,i=0,j=0;
    
    printf("Enter string : ");
    gets(ch);
    
    
    while(ch[i]!='\0'){
        if(ch[i]==' '){
            j = i;
            while(ch[j]!='\0'){
                ch[j]=ch[j+1];
                j++;
            }
        }
        len++;
        i++;
    }
    
   printf("New string is : ");
   puts(ch);
   

    return 0;

}
