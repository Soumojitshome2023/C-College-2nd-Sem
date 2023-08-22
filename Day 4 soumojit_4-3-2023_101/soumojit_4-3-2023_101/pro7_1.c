#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("Enter number : ");
	scanf("%d", &n);
	
	for(i=1;i<n;i++){
		if(n%i==0)
			s=s+i;
			
	}
	if(s==n)
		printf("Given Number %d is Perfect Number",n);
		
	else
		printf("Given Number %d is not Perfect Number",n);
	
	return 0;

}
