#include<stdio.h>
int main(){

	// Write a C program to swap two numbers.Without using third variable.

	int a,b;
	a = 10;
	b = 6;
	printf("Value of a before swap %d \n", a);
	printf("Value of b before swap %d \n", b);

	
	a = a+b;
	b = a-b;
	a = a-b;

	printf("Value of a after swap %d \n", a);
	printf("Value of b after swap %d \n", b);
	return 0;
}
