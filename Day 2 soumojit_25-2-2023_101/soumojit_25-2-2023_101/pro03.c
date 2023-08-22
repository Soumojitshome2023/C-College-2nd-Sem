#include<stdio.h>
int main(){

	//Write a C program to check whether a year is a leap year or not.

	int year;
	printf("Enter the year : ");
	scanf("%d", &year);
	
	if ((year%4==0) && (year%100!=0) || (year%400==0)){
		printf("%d is leap year \n", year);
	}
	else
		printf("%d is not leap year \n", year);
	
	
	
	
	return 0;
}
