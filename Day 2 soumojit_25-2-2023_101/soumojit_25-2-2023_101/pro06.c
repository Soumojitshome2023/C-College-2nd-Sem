#include<stdio.h>
int main(){
	// Write a C program to calculate and print electricity bill for consumer

	int current, previous,total;
	float bill;
	
	printf("Enter current meter readings :");
	scanf("%d", &current);
	
	printf("Enter previous meter readings :");
	scanf("%d", &previous);
	
	total = current - previous ;
	
	bill = 3.75*total;
	
	printf("Bill is %0.2f \n", bill);
	
	return 0;
}
