#include<stdio.h>
int main(){
    // Write a C program to find the sum of all elements of an array. Also find average.
    int n,index,sum=0;
    float average;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    
    for(index=0; index<n; index++){
        printf("Enter data for index %d: ",index);
        scanf("%d",&arr[index]);
    }
    
    for(index=0;index<n;index++)
    {
        sum=sum +arr[index];
    }
    average=(float)sum/n;
    
    printf("Sum = %d and Average = %0.2f\n",sum,average);
        
    return 0;

}
