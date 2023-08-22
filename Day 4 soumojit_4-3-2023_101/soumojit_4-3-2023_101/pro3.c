#include<stdio.h>
int main(){
	
	int n, fact, i;
	printf("enter a number  : ");
	scanf("%d", &n);
	
	fact = 1;
	i = 1;
	
	while (i<=n){
	fact=fact*i;
	i=i+1;
	}
	
	printf("factorial of %d is : %d \n", n,fact);
	
	
	return 0;
}
