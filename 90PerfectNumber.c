#include<stdio.h>
int main()
{
	int n,p=0,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		p=p+i;
	}
	
	if(p==n)
	printf("It's a PERFECT NUMBER!");
	else
	printf("It's NOT a PERFECT NUMBER!");
	
	return 0;
}
