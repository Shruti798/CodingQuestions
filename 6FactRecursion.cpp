#include<stdio.h>
int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int factorial=fact(n);
	printf("The factorial is: %d",factorial);
	
	return 0;
}
