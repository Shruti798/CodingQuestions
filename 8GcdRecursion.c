#include<stdio.h>
int min(int p,int q)
{
	return (p<q)?p:q;
}
int hcf(int x,int y)
{
	int rslt,m;
	if(x>y&&x>0)
	{
		rslt=hcf(x-y,y);
	}
	else if(y>x&&y>0)
	{
		rslt=hcf(x,y-x);
	}
	else
	{
		return min(x,y);
	}
}
int main()
{
	int a,b,result;
	scanf("%d%d",&a,&b);
	result=hcf(a,b);
	printf("The GCD of given numbers is: %d",result);
	return 0;
}
