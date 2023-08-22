#include<stdio.h>
int main(){
    // Bubble sort
    int i,n,j,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element at index %d  : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)  
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
        
    printf("After sort : ");
    for(i=0;i<n;i++)
        printf("%d, ",arr[i]);
            
    
    return 0;
     
}
