#include<stdio.h>
int main(){
	
	int n,number,reverse,remainder;
	printf("enter a number  : ");
	scanf("%d", &n);
	
	number = n;
	reverse = 0;
	while( n!=0 ){

	remainder = n%10;
	reverse = reverse*10 + remainder;
	n = n/10;
	}
	
	if (number == reverse)
		printf("%d is palindrome");
		
	else
		printf("%d is not palindrome");
	
	return 0;
}
