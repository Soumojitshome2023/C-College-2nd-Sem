#include<stdio.h>
int main(){
	
	int num1, num2;
	
	printf("enter 2 number : ");
	scanf("%d %d", &num1, &num2);
	
	switch(num1>num2){
		case 0:
			printf("%d is maximum", num2);
			break;
			
		case 1:
			printf("%d is maximum", num1);
			break;
	} 
	
	return 0;
}
