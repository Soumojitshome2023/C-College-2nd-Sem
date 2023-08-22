#include<stdio.h>
int main(){
    // Write a C program to search the any elements from an array using linear search technique.
    int n,i,index,element,Indexpos=0;
    
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(index=0; index<n; index++){
        printf("Enter data for index %d: ",index);
        scanf("%d",&arr[index]);
    }
    
    printf("Enter element to be searched : ");
    scanf("%d",&element);
    
    for(i=0; i<n; i++){
        if(arr[i]==element){
            printf("%d Found at index %d\n",element, i);
            Indexpos=1;
        }
    }
    if(Indexpos==0)
        printf("Item not present in array");
    
    return 0;

}
