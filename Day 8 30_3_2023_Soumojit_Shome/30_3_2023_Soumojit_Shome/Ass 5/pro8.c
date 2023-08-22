#include<stdio.h>
int main(){
    // selection sort
    int i,n,j,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element at index %d  : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){  
        int min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index])
                min_index = j;              
        }
        if(min_index != i){
            temp = arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }    
    printf("After sort : ");
    for(i=0;i<n;i++)
        printf("%d, ",arr[i]);
            
    
    return 0;
     
}
