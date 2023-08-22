#include<stdio.h>
int main(){
	
	float consumption, total_bill, per_unit_factor, extra ;
	
	printf("Enter electric consumption : ");
	scanf("%f", &consumption);
		
	if (consumption >= 0 && consumption <=200){
		per_unit_factor = 0.50;
		
		total_bill = per_unit_factor*consumption;
	}  
	
	else if (consumption >= 201 && consumption <=400){
		per_unit_factor = 0.65;
		extra = 100;
		
		total_bill = extra + (per_unit_factor*(consumption-200));	
	}  
	
	else if (consumption > 400 && consumption <=600){
		per_unit_factor = 0.80;
		extra = 250;
		
		total_bill = extra + (per_unit_factor*(consumption-400));
	}  
	
	else if (consumption > 600){
		per_unit_factor = 1.25;
		extra = 425;
		
		total_bill = extra + (per_unit_factor*(consumption-600));
	}  
	printf("The amount paid by the consumer = %f ",total_bill);
		
	
	return 0;
}

















