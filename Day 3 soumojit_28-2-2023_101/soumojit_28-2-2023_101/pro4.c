#include<stdio.h>
int main(){
	int num, a;
	printf("Enter a num : ");
	scanf("%d", &num);
	
	a = num%2;
	
	switch(a){
		case 1:
			printf("%d is odd number", num);
			break;
			
		case 0:
			printf("%d is even number", num);
			break;
	}
	
	return 0;
}
