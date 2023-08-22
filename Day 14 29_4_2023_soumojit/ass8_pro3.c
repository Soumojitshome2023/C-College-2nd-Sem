//3. Write a C program to find power of any number using recursive function.

#include<stdio.h>

float power(int base, int exponent){
    if(exponent==0)
        return 1; 
        
    else if(exponent>0)
        return (base * power(base, exponent-1));
        
    else if(exponent<0)
        return (1 / (float)power(base, -exponent));


}
int main(){
    int base, exponent;
    float result;
    printf("Enter base : ");
    scanf("%d",&base);

    printf("Enter exponent : ");
    scanf("%d",&exponent);

    result = power(base,exponent);
    
    printf("The value of %d to the power %d = %f",base, exponent,result); 


    return 0;
}
