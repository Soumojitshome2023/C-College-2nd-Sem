#include<stdio.h>
int main(){
	
	int num,flag=1, j=2;
	printf("enter a number  : ");
	scanf("%d", &num);
	
	if (num<=1)
		printf("%d is not a prime number \n",num);
		
	
	for(j=2;j<(num/2+1);j++){
		if(num%j==0)	
			flag=0;
	}
	
	if(flag==0)
		printf("%d is not prime number \n",num);
		
	else
		printf("%d is prime number \n",num);
	
	
	return 0;
}
