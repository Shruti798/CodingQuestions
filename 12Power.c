#include<stdio.h>
int power(int a,int b)
{
	if(b>=1)
	{
		return (a*power(a,b-1));
	}
	else return 1;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int p=power(a,b);
	printf("%d raised to power %d is: %d",a,b,p);
	return 0;
}
