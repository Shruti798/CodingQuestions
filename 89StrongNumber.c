#include<stdio.h>
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	return f;
}
int main()
{
	int n,m,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	m=n;
	while(m>0)
	{
		s=s+fact(m%10);
		m=m/10;
	}
	
	if(s==n)
	printf("STRONG NUMBER!");
	else
	printf("NOT a STRONG NUMBER!");
	
	return 0;
}
