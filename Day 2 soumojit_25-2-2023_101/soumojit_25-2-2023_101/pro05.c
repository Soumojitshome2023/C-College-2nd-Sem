#include<stdio.h>
int main(){
	int basic;
	float da,hra;
	
	printf("Enter basis salary :");
	scanf("%d", &basic);
	
	da = (0.74*basic);
	hra = (0.15*basic);
	
	
	printf("Gross salary = %0.2f", basic + da + hra);
	
	return 0;
}
