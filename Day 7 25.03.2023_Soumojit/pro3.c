#include<stdio.h>
int main(){
    // Write a C program to find maximum and minimum element in an array (without sorting).
    int n,i,max=0,index_max=0,index_min=0,status_max=0,status_min=0,min;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(i=0; i<n; i++){
        printf("Enter data for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            index_max = i;
            status_max=1;
        }
    }
    
    for(i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            index_min = i;
            status_min=1;
        }
    }
    if(status_max==0)
        printf("Maxima not found");
        
    else
        printf("Maxima = %d at index %d\n",max,index_max);
        
    if(status_min==0)
        printf("Minima not found");
        
        
    else
        printf("Minima = %d at index %d\n",min,index_min);
        
            
    return 0;

}
