#include<stdio.h>
int main()
{
	int m,n,p=1;
	printf("Enter number and its power: ");
	scanf("%d%d",&m,&n);
	do
	{
		p=p*m;
		n--;
	}while(n>0);
	
	printf("The power is: %d",p);
	return 0;
}
