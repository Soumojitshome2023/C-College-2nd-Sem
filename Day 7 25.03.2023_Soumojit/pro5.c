#include<stdio.h>
int main(){
    // Write a C program to find the second largest element from an array (without sorting).
    int n,index,max1,max2,min1,min2,i;
    
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(index=0; index<n; index++){
        printf("Enter data for index %d: ",index);
        scanf("%d",&arr[index]);
    }
    if(arr[0]>arr[1]){
        max1=min2=arr[0];
        max2=min1=arr[1];
    }
    else{
        max1=min2=arr[1];
        max2=min1=arr[0];
    }
    
    for(i=2;i<n;i++){
    //Largest and 2nd Largest
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
        
        //Smallest and 2nd smallest
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i] < min2 && arr[i] > min1)
        {
            min2 = arr[i];
        }
        
    }
    
    printf("max1 = %d and max2 = %d\n",max1,max2);
    printf("min1 = %d and min2 = %d\n",min1,min2);
    
        
    return 0;

}
