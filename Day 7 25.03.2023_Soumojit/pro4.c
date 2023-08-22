#include<stdio.h>
int main(){
    // Write a C program to check the frequency of a given element in an array
    int n,index,count=0,item,i;
 
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(index=0; index<n; index++){
        printf("Enter data for index %d: ",index);
        scanf("%d",&arr[index]);
    }
    
    printf("Enter the element to be count: ");
    scanf("%d",&item);
    
    for(i=0;i<n;i++){
        if(arr[i]==item){
            count = count + 1;
        }
    }
    if(count==0)
        printf("Item not present in array");
    else
        printf("Frequency of item %d is %d times\n",item, count);
    
        
    return 0;

}
