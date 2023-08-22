#include<stdio.h>
int main(){
	int a=0,b=1,c,n,i=2;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("%d, %d, ",a,b);
	
	for(i=3;i<=n;i++){
		c =a+b; 
		printf("%d, ", c);
		a=b;
		b=c;
		
	}
	
	return 0;

}
