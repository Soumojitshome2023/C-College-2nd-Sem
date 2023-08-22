#include<stdio.h>

int main(){
	int sum=0,temp,num,a;

	printf("Enter an integer: ");
    scanf("%d", &num);
	temp=num;
	
	while(num>=0){
		a = num%10;
   		sum = (sum + (a*a*a));
   		num=num/10;
   
   } 
   
	if(sum == num)
		printf("%d is an Armstrong number\n", num);
    
	else
   		printf("%d is not an Armstrong number\n", num);
    
    
	return 0;
}
