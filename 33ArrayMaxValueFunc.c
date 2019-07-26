#include<stdio.h>
int max(int p[],int n)
{
	int i,l;
	l=p[0];
	for(i=1;i<n;i++)
	{
		if(p[i]>l)
		l=p[i];
	}
	 return l;
}
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n],i,m;
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	m=max(a,n);
	 printf("Maximum value is: %d",m);
	 
	 return 0;
	
}
