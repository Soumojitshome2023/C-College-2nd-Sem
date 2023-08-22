#include<stdio.h>
int main(){
	
	int x,n,y;
	printf("Enter x and n : ");
	scanf("%d %d", &x,&n);
	
	switch (n){
	 	case 1:
			y = (1+ (x*x));
			printf("value of Y = %d \n",y);
			break;
	
		case 2:
			y = (1+ (x/n));
			printf("value of Y = %d \n",y);
			break;
	
		case 3:
			y = (1 + (2*x));
			printf("value of Y = %d \n",y);
			break;
	
		default:
			y = (1 + (n*x));
			printf("value of Y = %d \n",y);
			break;
	
	 
	}
	
	return 0;
}
