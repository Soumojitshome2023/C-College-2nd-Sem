//4. Write a function in C program to sort all elements of an array in ascending order using bubble sort technique.

#include<stdio.h>

int bubble(int arr[ ], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
        
            if(arr[j]>arr[j+1]){
            
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
int main(){
    int n,k;
    printf("Enter size of array : ");
    scanf("%d",&n);
        
    int arr[n];
    
    for(k=0;k<n;k++){
        printf("Enter element for index %d : ",k);
        scanf("%d",&arr[k]);
    }
    
    bubble(arr,n);
    
    printf("Sorted array is : ");
    for(k=0;k<n;k++)
        printf("%d, ",arr[k]);
  


    return 0;
}
