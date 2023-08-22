#include<stdio.h>
int main(){

	//Write a C program to check whether a number is even or odd using if-else statement.
	int num;
	printf("Enter a number :");
	scanf("%d", &num);
	
	if((num%2)==1)
		printf("%d is an odd number", num);
	else
		printf("%d is an even number", num);
	
	return 0;
}
