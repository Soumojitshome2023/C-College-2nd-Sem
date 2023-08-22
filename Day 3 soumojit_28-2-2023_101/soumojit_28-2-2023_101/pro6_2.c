#include<stdio.h>
int main(){
	
	int marks;
	
	printf("Enter marks :");
	scanf("%d", &marks);
	
	switch (marks/10){
		case 10:
		case 9:
			printf("Grade O");
			break;
			
		case 8:
			printf("Grade E");
			break;
		
		case 7:
			printf("Grade A");
			break;
			
		case 6:
			printf("Grade B");
			break;
			
		case 5:
			printf("Grade C");
			break;
			
		case 4:
			printf("Grade D");
			break;
			
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Grade F(FAILED)");
			break;
			
		default:
			printf("INVALID");
			break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	return 0;
}
















