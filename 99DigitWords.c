#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	
	while(sum>0)
	{
		if(sum%10==0)
		printf("Zero ");
		if(sum%10==1)
		printf("One ");
		else if(sum%10==2)
		printf("Two ");
		else if(sum%10==3)
		printf("Three ");
		else if(sum%10==4)
		printf("Four ");
		else if(sum%10==5)
		printf("Five ");
		else if(sum%10==6)
		printf("Six ");
		else if(sum%10==7)
		printf("Seven ");
		else if(sum%10==8)
		printf("Eight ");
		else if(sum%10==9)
		printf("Nine ");
		else
		printf(" ");
		
		sum=sum/10;
	}
	
	return 0;
}
