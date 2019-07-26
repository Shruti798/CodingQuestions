#include<stdio.h>
int numlen(int m)
{
	int i=0;
	while(m>0)
	{
		m=m/10;
		i++;
	}
	return i;
}
int power(int r,int l)
{
	int p=1;
	do
	{
		p=p*r;
		l--;
	}while(l>0);
	
	return p;
}
int main()
{
	int n,i=0,m,r,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	m=n;
	int len=numlen(n);
	
	printf("Length of number is: %d",len);
	
	int a[len];
	while(m>0)
	{
		r=m%10;
		a[i]=power(r,len);
		i++;
		m=m/10;
	}
	
	for(i=0;i<len;i++)
	sum=sum+a[i];
	
	if(sum==n)
	printf("It's an armstrong number!");
	else if(sum!=n)
	printf("It's NOT an armstrong number.'");
	
	return 0;
	
}
