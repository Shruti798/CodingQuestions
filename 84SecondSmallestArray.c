#include<stdio.h>
int main()
{
	int n,ss,s,i;
	printf("Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	s=a[0]; ss=a[1];
	
	if(ss>s)
	{
		s=a[1];
		ss=a[0];
	}
	
	for(i=2;i<n;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
	}
	
	printf("Second Largest Element is: %d",ss);
	
	return 0;
}
