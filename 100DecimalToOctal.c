#include<stdio.h>
int main()
{
	int n,r=0,m=0,o=0,i;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%8;
		o=o*10+r;
		n=n/8;
	}
	
	while(o!=0)
	{
		r=o%10;
		m=m*10+r;
		o=o/10;
	}
	
	printf("Octal equivalent of given decimal number is: %d",m);
	
	return 0;
}
