#include<stdio.h>
int factorial(int a);

int factorial(int a)
{
	if(a>=1){
		return a*factorial(a-1);
	}
	else 
	    return 1;
}
int main(){
	int n;
	printf("enter the number'n':");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
	
