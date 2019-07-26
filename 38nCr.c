#include<stdio.h>
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int main()
{
	int n,r,C;
	printf("Enter the values: ");
	scanf("%d%d",&n,&r);
	
	C=factorial(n)/(factorial(n-r)*factorial(r));
	
	printf("\n%d",C);
	
	return 0;
}
