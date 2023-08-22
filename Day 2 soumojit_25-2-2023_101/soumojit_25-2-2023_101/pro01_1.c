#include<stdio.h>
int main(){

	//Write a C program to swap two numbers. Using Third variable:

	int a,b,c;
	a = 10;
	b = 6;
	printf("Value of a before swap %d \n", a);
	printf("Value of b before swap %d \n", b);

	c = a;
	a = b;
	b = c;

	printf("Value of a after swap %d \n", a);
	printf("Value of b after swap %d \n", b);
	
	return 0;
}
