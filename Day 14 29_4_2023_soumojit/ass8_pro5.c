//5. Write a C program to sort all elements of an array in ascending order using marge sort technique

#include<stdio.h>

int merge(int arr[], int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    
    int L[n1],M[n2];
    
    for (int i=0;i<n1;i++)
        L[i]=arr[p+i];
    for (int j=0;j<n2;j++)
        M[j]=arr[q+1+j]; 
        
    int i=0,j=0,k=p;
    
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;    
    }
    
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    
    while(j<n2){
        arr[k]=M[j];
        j++;
        k++;
    }
}

int mergesort(int arr[], int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        
        merge(arr,l,m,r);
    
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
    
    mergesort(arr,0,n-1);
    
    printf("Sorted array is : ");
    for(k=0;k<n;k++)
        printf("%d, ",arr[k]);
  


    return 0;
}
