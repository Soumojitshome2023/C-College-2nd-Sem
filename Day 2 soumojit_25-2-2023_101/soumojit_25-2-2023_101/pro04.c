#include<stdio.h>
#include<math.h>

int main(){

	//Write a C program to find all roots of a quadratic equation
	
	double discriminant,a,b,c, root1, root2, real, imaginary;
	
	printf("Enter a b c :");
	scanf("%lf %lf %lf", &a,&b,&c);
	
	discriminant = ((b*b)-(4*a*c));
	
	if (discriminant > 0){
		root1 = (( -b + sqrt(discriminant)) / (2*a));
		root2 = (( -b - sqrt(discriminant)) / (2*a));
		printf("Roots are real and different Root 1 is %lf Root 2 is %lf \n", root1, root2);
	 }
	 else if (discriminant == 0){
	 	root1 = -b / (2 *a);
	 	printf("Root are real and equal Root 1 and Root 2 is %lf", root1);
	 	
	 }
	 
	 else{
	 	real = -b / (2 * a);
	 	imaginary = sqrt(discriminant) / (2 * a);
	 	printf("Roots are imaginary %lf, ± ,%lf,i", real,imaginary );
	 	
	}
	return 0;
}
