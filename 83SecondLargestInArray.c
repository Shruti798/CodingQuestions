#include<stdio.h>
int main()
{
	int n,l,s,i;
	printf("Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	l=a[0]; s=a[1];
	
	if(s>l)
	{
		l=a[1];
		s=a[0];
	}
	
	for(i=2;i<n;i++)
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
	}
	
	printf("Second Largest Element is: %d",s);
	
	return 0;
}
