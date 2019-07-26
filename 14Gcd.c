#include<stdio.h>
int main()
{
	int a,b,hcf,i;
	scanf("%d%d",&a,&b);
	for(i=2;i<a&&i<b;i++)
	{
		if(a%i==0&&b%i==0)
		hcf=i;
	}
	printf("The GCD of given umber is: %d",hcf);
	return 0;
}
