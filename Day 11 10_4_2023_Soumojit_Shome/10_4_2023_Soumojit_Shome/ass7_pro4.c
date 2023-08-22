#include<stdio.h>
#include<string.h>

int main(){
   // 4. Write a C program to find the reverse of a string.
    char ch[30],new[30];
    int len =0,i=0,j=0;
    
    printf("Enter string : ");
    gets(ch);
    
    
    while(ch[i]!='\0'){
        len++;
        i++;
    }
        i--;
    while(i>=0){
        new[j]=ch[i];
        j++;
        i--;
        
    }
    new[j] = '\0';
    
   printf("Reverse array : ");
   puts(new);
   
   
  

    return 0;

}
